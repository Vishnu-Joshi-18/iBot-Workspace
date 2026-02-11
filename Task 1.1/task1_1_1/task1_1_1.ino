int analogPin = A0; 

void setup() {
  Serial.begin(9600);
  pinMode(analogPin, INPUT);
}

void loop() {
  int sensorValue = analogRead(analogPin);
  Serial.print("IR Value: ");
  Serial.println(sensorValue);
  delay(100);
}