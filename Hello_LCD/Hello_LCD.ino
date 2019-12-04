#include <LiquidCrystal.h> //Library necessary to read LCD code!!!

LiquidCrystal lcd(7, 8, 9, 10, 11, 12); //LCD pins setup 

void setup() {
	lcd.begin(16, 2);
	lcd.setCursor(0, 0); //prints HELLO WORLD! on the first line
	lcd.print("HELLO WORLD!"); //LCD is constantly displaying this

}

void loop() {
	lcd.setCursor(0, 1); //Prints timer on the next line
	lcd.print(millis() / 1000);  //Basic timer function
}
