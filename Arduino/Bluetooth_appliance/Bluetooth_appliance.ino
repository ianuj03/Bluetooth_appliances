#include<SoftwareSerial.h>
SoftwareSerial BT(8,9);//Tx,Rx
#define LIGHT 2 //IN1
#define FAN 3 //IN2
void setup(){
  pinMode(LIGHT,OUTPUT);
  pinMode(FAN,OUTPUT);
  BT.begin(38400);//Standard Baud Rate
  delay(500);
  BT.write("Enter the Appliance: ");
}
byte fanState=0,lightState;
int fanSwitch,lightSwitch;
void loop(){
  if(BT.available()){
    String appliance=BT.readString();
    if(appliance.equalsIgnoreCase("fan")){
      if (fanState)
        BT.write("\nFan is ON.\n\nPress 0 to OFF: ");
      else
        BT.write("\nFan is OFF.\n\nPress 1 to ON: ");
      fanSwitch=BT.parseInt();
      if(fanState&&(!fanSwitch)){
        digitalWrite(FAN,0);
        BT.write("\n\nFan is OFF.");
        fanState=0;
      }
      else if(!fanState&&fanSwitch){
        digitalWrite(FAN,1);
        BT.write("\n\nFan is ON.");
        fanState=1;
      }
    }
    else if(appliance.equalsIgnoreCase("light")){
      if(lightState)
        BT.write("\nLight is ON.\n\nPress 0 to OFF.");
      else
        BT.write("\nLight is OFF.\n\nPress 1 to OFF.");
      lightSwitch=BT.parseInt();
      if(lightState&&(!lightSwitch)){
        digitalWrite(LIGHT,0);
        lightState=0;
        BT.write("\n\nLight is OFF");
      }
      else if(!lightState&&lightSwitch){
        digitalWrite(LIGHT,1);
        lightState=1;
        BT.write("\n\nLight is ON");
      }
    }
    BT.write("\n\nEnter the appliance: ");
  }
}
