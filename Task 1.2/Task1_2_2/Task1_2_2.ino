#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  //LCD's number of columns and rows:
  lcd.begin(16, 2);
  
  lcd.print("Hello World");
  
  lcd.setCursor(0, 1);
  
  lcd.print("iBot Club"); 
}

void loop() {

}