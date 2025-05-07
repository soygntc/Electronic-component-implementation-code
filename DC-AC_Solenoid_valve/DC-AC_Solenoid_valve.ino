/********************************************************
 * Componente: Valvula solenoide DC/AC
 * Autora: Giulianna Torres Campodónico
 ********************************************************/
int SolenoidPin= 3 // output pin we are using 

void setup() {
  pinMode(SolenoidPin, OUTPUT); // configures the pin as an output  
}

void loop() {
  digitalWrite(SolenoidPin, HIGH); // solenoid opens
  delay(5000);
  digitalWrite(SolenoidPin, LOW); // solenoid closes
  delay(5000);

}