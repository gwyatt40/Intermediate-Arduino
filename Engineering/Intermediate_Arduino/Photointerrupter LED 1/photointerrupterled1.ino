

   
int ledPin =  13;      

int photoPin = 2;
int pinState = 0; 


void setup() {
Serial.begin(9600);


pinMode(photoPin, INPUT_PULLUP);
pinMode(ledPin, OUTPUT);
attachInterrupt(digitalPinToInterrupt(photoPin), gOn, RISING);
attachInterrupt(digitalPinToInterrupt(photoPin), gOff, FALLING);

}

void gOn(){
	digitalWrite(ledPin, HIGH);
	  Serial.println("high");
}

void gOff(){
	digitalWrite(ledPin, LOW);
	  Serial.println("low");
}

void loop() {
pinState = analogRead(photoPin);

   Serial.println("high");
 


}