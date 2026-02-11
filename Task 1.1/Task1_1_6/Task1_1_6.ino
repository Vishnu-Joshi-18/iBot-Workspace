const int flameSensorPin = A1; // Analog Output of Flame Sensor

void setup() {
  Serial.begin(9600);
}

void loop() {
  int reading = analogRead(flameSensorPin);
  Serial.print("Flame/IR Intensity: ");
  Serial.println(reading);
  delay(200);
}