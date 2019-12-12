// Potentiometer Code
// Georgia Wyatt
/* Uses a potentiometer to adjust the brightness of an LED and write the value on an LCD*/


#include <Wire.h>
#include <LiquidCrystal_I2C.h> 
LiquidCrystal_I2C lcd(0x3f,16,2); //Basic LCD setup and libraries etc

int potPin= A0;  //Sets potentiometer to analog pin A0
int LEDPin= 9;  // Sets LED to normal arduino pin 9
int readValue;  // Variable read from potentiometer
int writeValue; // Variable written to LED
 
void setup() {
  pinMode(potPin, INPUT);  //Potentiometer pin is INPUT
  pinMode(LEDPin, OUTPUT); //LED pin is output
  Serial.begin(9600);      
  lcd.begin(16, 2);
  lcd.print("You are writing a value of"); //LCD is constantly displaying this
  lcd.init();
  lcd.backlight();
}
 
void loop() {
  
 readValue = analogRead(potPin);  //readValue derived from reading the potentiometer value
 writeValue = (255./1023.) * readValue; //Formula for calculating LED write value
 analogWrite(LEDPin, writeValue);      //LED set to writeValue
 Serial.print("You are writing a value of ");  
 Serial.println(writeValue); //Serial print for debugging purposes
 lcd.setCursor(0, 1);
 lcd.print(writeValue); //LCD prints same thing as Serial Monitor
 
}
