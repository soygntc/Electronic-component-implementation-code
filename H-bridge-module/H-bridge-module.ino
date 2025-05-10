/********************************************************
 * Componente: Módulo puente H
 * Autora: Giulianna Torres Campodónico
 ********************************************************/
int motorPin1= 13;
int motorPin2= 12;
int ena= 11; // PWM pin for speed control

void setup() {
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(ena,  OUTPUT); 

}

void loop() {
  // rotate motor forward 
  digitalWrite(motorPin1,  HIGH);
  digitalWrite(motorPin2, LOW);
  analogWrite(ena, 127); // sets ~50% duty cycle
  delay(2000);

   // rotate motor backward 
  digitalWrite(motorPin1,  LOW);
  digitalWrite(motorPin2, HIGH);
  analogWrite(ena, 127); 
  delay(2000);

  // stop motor
  digitalWrite(motorPin1,  LOW);
  digitalWrite(motorPin2, LOW);
  delay(3000);
}
