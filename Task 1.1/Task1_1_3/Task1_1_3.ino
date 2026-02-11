//PIR sensor gives digital output

void setup() {
  Serial.begin(9600);
  pinMode(8, INPUT);
}

void loop() {
  int motionState = digitalRead(8);
  
  if (motionState == HIGH) {
    Serial.println("Motion Detected!");
  } else {
    Serial.println("No Motion");
  }

  delay(500);
}