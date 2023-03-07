#include <AccelStepper.h>
#include <Conceptinetics.h>

#define DMX_SLAVE_CHANNELS 120 // Number of slave DMX channels
#define DMX_CHNLS 0// Define the channel of the device
DMX_Slave dmx_slave ( DMX_SLAVE_CHANNELS );

// Stepper Travel Variables
long TravelX;
int move_finished=1;  // Used to check if move is completed 
long initial_homing=-1;  // Used to Home Stepper at startup

 
// AccelStepper Setup
AccelStepper stepper(1, 9, 8); // 1 if using driver, then STEP PIN and DIRECTION PIN

// Define the Pins used
#define home_switch 13 // Pin connected to Home Switch (MicroSwitch)
#define dir_pin 8 // direction pin
#define step_pin 9 // step pin
#define M0 10 // PULL2HIGH
#define M1 11 // PULL2HIGH
#define M2 12 // PULL2HIGH

int pos = 6400; // Number of steps MAX

void setup() {
   
   pinMode(home_switch, INPUT_PULLUP);
   delay(5);  // Defining Pullup for Homing Switch

   pinMode (M0, OUTPUT);
   pinMode (M1, OUTPUT);
   pinMode (M2, OUTPUT);
   digitalWrite(M0,HIGH); // This block is setting the motor to 32 Microsteps per Step
   digitalWrite(M1,HIGH);
   digitalWrite(M2, HIGH);
   delay(5);  

   //  Set Max Speed and Acceleration of each Steppers at startup for homing
 stepper.setMaxSpeed(100.0);      // Set Max Speed of Stepper (Slower to get better accuracy)
 stepper.setAcceleration(100.0);  // Set Acceleration of Stepper
 dmx_slave.enable ();   
 dmx_slave.setStartAddress (1); 

// Start Homing procedure of Stepper Motor at startup
  while (digitalRead(home_switch)) {  // Make the Stepper move CCW until the switch is activated   
    stepper.moveTo(initial_homing);  // Set the position to move to
    initial_homing--;  // Decrease by 1 for next move if needed
    stepper.run();  // Start moving the stepper
 delay(1); 
}

  stepper.setCurrentPosition(0);  // Set the current position as zero for now
  stepper.setMaxSpeed(100.0);      // Set Max Speed of Stepper (Slower to get better accuracy)
  stepper.setAcceleration(100.0);  // Set Acceleration of Stepper
  initial_homing=1;

  while (!digitalRead(home_switch)) { // Make the Stepper move CW until the switch is deactivated
    stepper.moveTo(initial_homing);  
    stepper.run();
    initial_homing++;
 delay(1); 
  }
  
  stepper.setCurrentPosition(0);   // Re-sets position
  stepper.setMaxSpeed(10000);      // Set final Max Speed of Stepper (Faster for regular movements)
  stepper.setAcceleration(40000);  // Set final Acceleration of Stepper

}
 

void loop()
{ int dmx_chan1 = dmx_slave.getChannelValue(1); // call for DMX sniff
  int dmx_chan2 = dmx_slave.getChannelValue(2); // call for DMX sniff
  stepper.setSpeed(dmx_chan1*40); 
  if (stepper.distanceToGo() == 0)
  {
    delay(500);
    pos = -pos;
    stepper.move(pos); \
  }  
    if (dmx_chan2 == 255)
  {
    delay(500);
    pos = -pos;
    stepper.move(pos); \
  }  
  stepper.runSpeedToPosition();

}