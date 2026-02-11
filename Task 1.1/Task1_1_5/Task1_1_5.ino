const int soundPin = 5; 
const int ledPin = 13;  

void setup() {
  pinMode(soundPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(soundPin) == HIGH) {
     // Logic may vary (HIGH or LOW) based on module
    Serial.println("Sound Detected");
    digitalWrite(ledPin, HIGH);
    delay(2000); // Keep LED on for 2 seconds
    digitalWrite(ledPin, LOW);
  }
}