#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F,2,1,0,4,5,6,7);

int count = 0;

int buttonState = 0; 
const int buttonPin = 2;


  void setup(){
  	lcd.begin (16,2); // for 16 x 2 LCD module
	lcd.setBacklightPin(3,POSITIVE);
	lcd.setBacklight(HIGH);
	lcd.setCursor(0, 0);
	lcd.print("HELLO WORLD!");
	pinMode(buttonPin, INPUT);
  }

  void loop() {
 
 	  buttonState = digitalRead(buttonPin);
 
  	  if (buttonState == HIGH) {
  	  	count = count + 1;
  	  	delay(300);
  	  }


  	  if(buttonState == LOW) {
  	  	count = count;
  	  }



  	
	lcd.setCursor(0, 1);
	lcd.print(count); 
}