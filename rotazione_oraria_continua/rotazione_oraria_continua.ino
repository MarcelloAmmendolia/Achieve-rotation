int Distance = 0;  // Record the number of steps we've taken

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
}

void loop() {

digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  delayMicroseconds(100);          
  digitalWrite(9, LOW); 
 delayMicroseconds(100);          
}
