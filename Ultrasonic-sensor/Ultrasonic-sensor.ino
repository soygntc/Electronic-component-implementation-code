/********************************************************
 * Componente: Sensor ultrasónico HC-SR04
 * Autora: Giulianna Torres Campodónico
 ********************************************************/
const int trigPin= 9;
const int echoPin=10;
float distance;
long duration;

void setup() {
  pinMode(trigPin, OUTPUT); // configures the trigger pin as an output
  pinmode(echoPin, INPUT); // configures the echo pin as an input
  Serial.begin(9600); // stars the serial communication

}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); // we send the pulse to prepare the sensor to send the 8 cycle burst
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration= pulseIn(echoPin, HIGH); // the echo pin is activated and stars to count the sound wave travel
  distance= duration*0.0343/2; // calculating the distance 

  Serial.print("La distancia es:");
  Serial.print(distance); // prints the distance value in the serial monitor
  delay(500);

  

}
