int analogPin = A0; 

void setup() {
  Serial.begin(9600);
  pinMode(analogPin, INPUT);
}

void loop() {
  int sensorValue = analogRead(analogPin);
  Serial.print("Light Intensity : ");
  Serial.println(sensorValue);
  delay(500);
}