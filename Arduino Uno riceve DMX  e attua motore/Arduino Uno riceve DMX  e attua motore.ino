
 #include <Conceptinetics.h>
// Number of slave DMX channels
 #define DMX_SLAVE_CHANNELS 120
// Define the channel of the device
 #define DMX_CHNLS 0
 int Distance = 0;  // Record the number of steps we've taken
// Configure a DMX slave controller
 DMX_Slave dmx_slave ( DMX_SLAVE_CHANNELS );
 void setup() {
     pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);              
  pinMode(8, OUTPUT);     
  pinMode(9, OUTPUT);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH); 
  digitalWrite(6, HIGH); 
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
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
 
digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  delayMicroseconds(dmx_slave.getChannelValue(3));          
  digitalWrite(9, LOW); 
 delayMicroseconds(30*dmx_slave.getChannelValue(3));  
}

