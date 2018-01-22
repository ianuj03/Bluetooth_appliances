# Bluetooth_appliances
Bluetooth Controlled Electric Appliances.
In order to connect electric appliance working with AC 220V power supply, we need a module named Relay.
Relay has two mode of operation: Normally Open and Normally close.
In total, a relay has three output PIN: Common connection, Normally Open, and Normally close.
Apart from this, the module has three other pins that need to be connected to the Arduino. These pins are: VCC, GND, and IN1.

###Connection:
```
VCC- Connect this to 5V of Arduino;
GND- Connect this to Ground; and
IN1- Connect to any digital PIN except PIN-0. (Trigger pin for Relay)

NO- Connect this to appliance from the switch board;
COM- Connect this to live wire; and
NC- No connection leave it open.
```

For this experiment, I have connected the appliance to Normally Open. Because, when you digitally write IN1 HIGH this will give power supply to the appliance.
