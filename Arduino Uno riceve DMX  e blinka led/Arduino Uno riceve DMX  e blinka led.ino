
 #include <Conceptinetics.h>
// Number of slave DMX channels
 #define DMX_SLAVE_CHANNELS 120
// Define the channel of the device
 #define DMX_CHNLS 0
// Configure a DMX slave controller
 DMX_Slave dmx_slave ( DMX_SLAVE_CHANNELS );
 const int ledPin = 9;
 void setup() {
    pinMode(ledPin, OUTPUT);
  // Enable DMX slave interface and start recording
  // DMX data
  dmx_slave.enable (); 
 // Set start address to 1, this is also the default setting
  // You can change this address at any time during the program
  dmx_slave.setStartAddress (1);
 //
  // Register on frame complete event to determine signal timeout
  //
 }
void loop() {
 // Update the value of LED state 
  analogWrite(ledPin, dmx_slave.getChannelValue(3));  // turn the LED on (HIGH is the voltage level)       
}