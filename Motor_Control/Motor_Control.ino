int potPin = 2;
int motorPin = 9;
int valPot = 0;
int varMotor = 0;

void setup() {
	pinMode(motorPin, OUTPUT);
	Serial.begin(9600);

}

void loop() {
	valPot = analogRead(potPin);
	varMotor = valPot/4;
	Serial.println(varMotor);
	analogWrite(motorPin, varMotor);
			
}