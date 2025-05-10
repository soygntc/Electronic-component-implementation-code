/********************************************************
 * Componente: Servomotor
 * Autora: Giulianna Torres Campodónico
 ********************************************************/
#include <Servo.h> // include the library
Servo myservo;  // create servo object to control a servo

int position = 0;    // variable to store the servo position in degrees

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  for (position= 0; position <= 180; position += 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable "position"
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (position = 180; position >= 0; position -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(position);              // tell servo to go to position in variable "position"
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}
