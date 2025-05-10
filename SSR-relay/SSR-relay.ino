/********************************************************
 * Componente: Relay SSR
 * Autora: Giulianna Torres Campodónico
 ********************************************************/

int relayPin= 2;

void setup() {
  pinMode(relayPin, OUTPUT); // configures an specific pin

  /* use if the SSR is required to be activated only once (temporized relay):
  digitalWrite(relayPin, HIGH);
  delay(5000);
  digitalWrite(relayPin, LOW); */

}

void loop() {
  digitalWrite(relayPin, HIGH); // turn on SSR
  delay(5000);
  digitalWrite(relayPin, LOW); // turn off SSR
  delay(3000);
  
}
