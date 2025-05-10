/********************************************************
 * Componente: Potenciometro
 * Autora: Giulianna Torres Campodónico
 ********************************************************/

// PARA LEER EL VALOR ANALOGICO

int potPin = A0;  // pin where the potenciometer is connected
int potValue = 0; // store the reading value

void setup() {
  Serial.begin(9600); // initialize the commnunication serial
}

void loop() {
  potValue = analogRead(potPin);  // read the value (0-1023)
  Serial.println(potValue);       // show the value 
  delay(100);                     
}
