/********************************************************
 * Componente: Sensor de flujo efecto hall DC
 * Autora: Giulianna Torres Campodónico
 ********************************************************/

const pinSensor = 2; // this is the input pin on the Arduino
volatile int pulses = 0; // its declared as volatile so that the ISR and the main program are used correctly
unsigned long preTime = 0; // sensor pulses counter

float caudal = 0;

void setup() {
  Serial.begin(9600);
  pinMode(pinSensor, INPUT); // sets the pin as an input
  attachInterrupt(digitalPinToInterrupt(pinSensor), countingPulses, RISING); // an interrupt is used to make the reading of the rotating encoding
}

void loop() {
  if (millis() - preTime >= 1000) { // verify and measures the flow every second
    detachInterrupt(digitalPinToInterrupt(pinSensor)); // stop the Interrupt 
    
    caudal_Lmin = pulses / 11.0; // calculate the caudal with the factor convertion

    Serial.print("Caudal: ");
    Serial.print(caudal);
    Serial.println(" L/min ");

    // resets the counter, updates time, and reactivates the Interrupt.
    pulses = 0;
    preTime = millis();
    attachInterrupt(digitalPinToInterrupt(pinSensor), countingPulses, RISING);
  }
}

// ISR function
void countingPulses() {
  pulses++;
}
