# Bluetooth_appliances
Bluetooth Controlled Electric Appliances.
In order to connect electric appliance working with AC 220V power supply, we need a module named Relay.
Relay has two mode of operation: Normally Open and Normally close.
In total, a relay has three output PIN: Common connection, Normally Open, and Normally close.
Apart from this, the module has three other pins that need to be connected to the Arduino. These pins are: VCC, GND, and IN1.

If you haven't oTour switch board anytime than this is pretty cool for you.
Aim of this experiment is to control the existing light of your room with your phone through 

### Bluetooth HC05
https://cdn.makezine.com/uploads/2014/03/hc_hc-05-user-instructions-bluetooth.pdf

## Connection:
```
VCC- Connect this to 5V of Arduino;
GND- Connect this to Ground; and
IN1- Connect to any digital PIN except PIN-0. (Used for LIGHT)
IN2- Connect to any digital PIN. (Used for FAN)
```
#### AC Connection:
```
NO- Connect this to appliance from the switch board;
COM- Connect this to the Live wire from the switch board; and
NC- No connection leave it open.

```
Make the AC Connection same for both the appliance.

For this experiment, I have connected the appliance to Normally Open. Because, when you digitally write IN1/IN2 HIGH this will give power supply to the respective appliance.



