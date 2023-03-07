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

Housing:


## DMX STEP MOTOR N.1 - BASIC CONTINUUM PING PONG 

![ezgif com-reverse](https://user-images.githubusercontent.com/82780678/223487517-3209c555-cb8b-4760-9436-6b90e9d329e5.gif)  
FILE: ARDUINO UNO DMX STEPPER PING PONG.INO  

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


## DMX STEP MOTOR N.3 - SERVO STYLE - 200 STEPS  
## DMX STEP MOTOR N.4 - SERVO SYLE - MICROSTEPPED  

# DMX:  


Per controllo con Arduino Nano senza DMX shield:  
Da comprare:  
IC MAX 485  
Arduino Nano  
DIP Switch  





