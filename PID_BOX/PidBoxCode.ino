#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F,2,1,0,4,5,6,7);



int potPin = 2;
int motorPin = 9;
int valPot = 0;
int varMotor = 0;
int speed = 0;

void setup() {
	pinMode(motorPin, OUTPUT);
	Serial.begin(9600);
	lcd.begin (16,2); // for 16 x 2 LCD module
	lcd.setBacklightPin(3,POSITIVE);
	lcd.setBacklight(HIGH);
	lcd.setCursor(0, 0);
	lcd.print("SPEED:");
	

}

void loop() {
	valPot = analogRead(potPin);
	varMotor = valPot/4;
	Serial.println(speed);
	if (varMotor!=0){
		speed = -map(varMotor,1,255,1,5)+ 6;

	}

	if (varMotor == 5){
		speed = 0;
	}
	
	analogWrite(motorPin, varMotor);
	lcd.setCursor(0, 1);
    lcd.print(speed); 
	
			
}





