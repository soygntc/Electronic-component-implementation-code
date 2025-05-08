/********************************************************
 * Componente: Sensor de temperatura RTD
 * Autora: Giulianna Torres Campodónico
 ********************************************************/
const int analogPin= A0;
float voltage;
float temperature;

void setup() {
  Serial.begin(9600);

}

void loop() {
  voltage= analogRead(analogPin)*5.0/1023.0; // converts ADC to a voltage
  temperature =0.568 * voltage - 1.03; // value of temperature using a calibration curve
  Serial.print("La temperatura es: ");
  Serial.print(temperature);
  Serial.println(" °C");

  delay(1000);
  
}
