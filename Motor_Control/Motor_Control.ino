int potPin = 2;
int motorPin = 9;
int valPot = 0; //Initial potentiometer value is 0
int varMotor = 0; //Initial motor value is 0 (stopped)

void setup() {
	pinMode(motorPin, OUTPUT); 
	Serial.begin(9600);

}

void loop() {
	valPot = analogRead(potPin); // The variable valPot is determined by reading the potentiometer
	varMotor = valPot/4; //valPot is converted to a value that is readable by the motor
	Serial.println(varMotor); //Serial monitor reads varMotor, can check with motor speed
	analogWrite(motorPin, varMotor); //Motor writes speed corresponding to potentiometer value
			
}
