# Achieve-rotation  
Achieve rotation w/ DC motors, servos, step motors.  
  
Possibili limiting switch: Hall-effect switch, Micro limiting switches.  

Da comprare:  
Micro limit switch  
Hall effect switch  
Servo motor  

Risorse:  
https://www.youtube.com/watch?v=YsLykxnHApg&t=3s  
https://www.youtube.com/watch?v=0Xi7unlq1L4  
https://www.youtube.com/watch?v=3odRT6zdzqk  
https://www.youtube.com/watch?v=cPz5tE2EHR4  
Libreria Accel-stepper: https://www.airspayce.com/mikem/arduino/AccelStepper/examples.html 

With this configuration, it is possible to run until 3 step motors (and relative driver like the DRB8825)  
for every Arduino + DMX Shield. Then, is possible to daisy chain those devices to create a DMX linear connection
between different modules.  

Housing:


## DMX STEP MOTOR N.1 - BASIC CONTINUUM PING PONG 

![ezgif com-resize](https://user-images.githubusercontent.com/82780678/223498276-6d8e5fbd-bbd3-4514-bdf4-7c42063e5c7e.gif)  
FILE: Arduino Uno Dmx Stepper Ping Pong  

📌 CONSTANTS:  
Angle of rotation (Number of Steps)  

▶️ INPUTS:  
DMX channel 1: velocity   
DMX channel 2: acceleration  
DMX channel 3: direction  NOT ACHIEVED  

After housing, the motor finds the 0 position, wich equals to A position.  
Then, the motor rotates from A to B position. 
The rotation is sensible to the variations in the DMX inputs.
The maximum position (B) needs to be set by the user depending on the switch position. 

Keep in mind!:  Programming this in a DMX graphic environment can be tricky  
since you don't have a real notion of how many steps you need to complete an action.  
note: - definire esatto numero di step da compiere una volta che l'hardware sarà finito.  

  

## DMX STEP MOTOR N.2 - SHAFT  



## DMX STEP MOTOR N.4 - POSITION CONTROL - MICROSTEPPED  

![ezgif com-gif-maker](https://user-images.githubusercontent.com/82780678/223495711-80044d38-4065-490f-9c1e-6d5025e9e710.gif)  
FILE: Arduino Uno Dmx Position Control Microstepped 

📌 CONSTANTS:  
xxx  

▶️ INPUTS:  
DMX channel 2: Position to move to  
DMX channel 3: Maximum Acceleration, interpolation between position 0 and target.  

After housing, the motor finds the 0 position.  
Then, the motor sniffs the bytes coming from the DMX calls,
matching his position to them. (Example: if 255 is coming from the DMX, the motor will go to the last step of his full rotation).
The rotation is sensible to the variations in the DMX inputs.
The maximum position (B) needs to be set by the user depending on the switch position.
To do so, change the "dmx_remapped" parameter in the void loop to match the number of steps chosen.  

Keep in mind!:  Programming this in a DMX graphic environment can be tricky  
since you don't have a real notion of the fact that some automation may (or may not) be finished while still (or not yet)   
appearing like a reached parameter from the DMX visual interface, since there is no way to interlace seconds to the equation.
Therefore, while running motors at low speeds, one must ensure that even if the ramp on the DMX interface is going from 0 to 255 in
a single second, to achieve a smooth look the stepper is forced to take more time to finish the action, differently from the example
above wich is almost real-time.  
note: - definire esatto numero di step da compiere una volta che l'hardware sarà finito.  


## DMX STEP MOTOR N.4 - POSITION CONTROL - FULLSTEP   
![ezgif com-gif-maker](https://user-images.githubusercontent.com/82780678/223495711-80044d38-4065-490f-9c1e-6d5025e9e710.gif)   
FILE: Arduino Uno Dmx Position Control Microstepped 

📌 CONSTANTS:  
xxx  

▶️ INPUTS:  
DMX channel 2: Position to move to  
DMX channel 3: Maximum Acceleration, interpolation between position 0 and target.  

After housing, the motor finds the 0 position.  
Then, the motor sniffs the bytes coming from the DMX calls,
matching his position to them. (Example: if 255 is coming from the DMX, the motor will go to the last step of his full rotation).
The rotation is sensible to the variations in the DMX inputs.
The maximum position (B) needs to be set by the user depending on the switch position.
To do so, change the "dmx_remapped" parameter in the void loop to match the number of steps chosen.  

Keep in mind!:  Programming this in a DMX graphic environment can be tricky  
since you don't have a real notion of the fact that some automation may (or may not) be finished while still (or not yet)   
appearing like a reached parameter from the DMX visual interface, since there is no way to interlace seconds to the equation.
Therefore, while running motors at low speeds, one must ensure that even if the ramp on the DMX interface is going from 0 to 255 in
a single second, to achieve a smooth look the stepper is forced to take more time to finish the action, differently from the example
above wich is almost real-time.  
note: - definire esatto numero di step da compiere una volta che l'hardware sarà finito.  





# DMX:  


Per controllo con Arduino Nano senza DMX shield:  
Da comprare:  
IC MAX 485  
Arduino Nano  
DIP Switch  





