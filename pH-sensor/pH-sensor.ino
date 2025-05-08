/********************************************************
 * Componente: Sensor pH, sonda y tarjeta PCB
 * Autora: Giulianna Torres Campodónico
 ********************************************************/

const int analogPin = A0;
float voltage;
float pHValue;

void setup() {
  Serial.begin(9600);
}

void loop() {
  voltage = analogRead(analogPin) * 5.0 / 1023.0; // converts ADC to voltage
  pHValue = -5.7141*voltage + 22.295;        // value of pH using an calibration curve


  Serial.print("El pH es: ");
  Serial.print(pHValue);

  delay(1000); // wait 1 second before the next reading
}
