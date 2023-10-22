#define PH_PIN 35
#define ADC_RESOLUTION 4095.0f
#define VOLTAGE 5.0f

void setup() {
    Serial.begin(9600);
}

void loop() {
  int val = analogRead(PH_PIN);
  Serial.println("ADC: " + String(val));
  float voltage = val * (VOLTAGE / ADC_RESOLUTION);

  Serial.println("Voltage: " + String(voltage));
  delay(300);
}
