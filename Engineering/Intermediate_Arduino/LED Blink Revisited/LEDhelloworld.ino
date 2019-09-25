#include <LiquidCrystal.h>//Don't forget to enter this library

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
	lcd.begin(16, 2);
	lcd.setCursor(0, 0);
	lcd.print("HELLO WORLD!");

}

void loop() {
	lcd.setCursor(0, 1);
	lcd.print(millis() / 1000); 
}