int ledState = LOW;         
int buttonState;             
int lastButtonState = LOW;   

void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT_PULLUP);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(2);
  Serial.println(buttonState);
  // Check if button was just pressed (transition from LOW to HIGH)
  if (buttonState == HIGH && lastButtonState == LOW) {
    ledState = !ledState; // Flip the LED state
    digitalWrite(10, ledState);
    delay(50); // Simple debounce
  }
  lastButtonState = buttonState;
}

