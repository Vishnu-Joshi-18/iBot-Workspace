
void setup() {
  // put your setup code here, to run once:
 pinMode(10, OUTPUT);
 //using Pin 10 here for PWM
}

void loop() {

for (int i=0; i<= 255 ; i++){
      analogWrite(10, i);
  	  delay(5); 
  }


for (int i=255; i>= 0 ; i--){
      analogWrite(10, i);
  	  delay(5); 
  }

}
