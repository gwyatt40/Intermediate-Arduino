#include <Wire.h>
#include <LCD.h> 
#include <LiquidCrystal_I2C.h> //2 new libraries for LCD backpack + different liquid crystal (12c)
LiquidCrystal_I2C lcd(0x3F,2,1,0,4,5,6,7); //Different setup pins 

int count = 0; //variable used to count button clicks

int buttonState = 0; 
const int buttonPin = 2; //sets button pin to 2


  void setup(){
  	lcd.begin (16,2); // for 16 x 2 LCD module
	lcd.setBacklightPin(3,POSITIVE); 
	lcd.setBacklight(HIGH); //Backlight mst be set for LCD backpack
	lcd.setCursor(0, 0); //prints hello world on first line
	lcd.print("HELLO WORLD!");
	pinMode(buttonPin, INPUT); //Sets buttonPin as input
  }

  void loop() {
 
 	  buttonState = digitalRead(buttonPin); //Reads button pin to determine whether HIGH or LOW
 
  	  if (buttonState == HIGH) {
  	  	count = count + 1; //Count increases with every click (or with every .3 seconds button is held)
  	  	delay(300);
  	  }


  	  if(buttonState == LOW) {
  	  	count = count; //When button not activated, count does not increase
  	  }



  	
	lcd.setCursor(0, 1);
	lcd.print(count);  //prints count on second line
}
