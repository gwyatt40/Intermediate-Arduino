// Potentiometer Code 1 (Loop)
// Georgia Wyatt
/* Uses a basic loop to read a photointerrupter which, when activated, causes an LED to turn on*/
int photoPin = 2;
int ledPin = 8;
int photoState = 0; //Sets photoState variable 



void setup(){
Serial.begin(9600);
pinMode(photoPin, INPUT_PULLUP);
pinMode (ledPin, OUTPUT);


}

void loop() {


photoState = digitalRead(photoPin); //photoState works the same as a buttonState variable, except reading photointerrupter 
 
  	  if (photoState == HIGH) { //When photointerrupter activated, LED on
  	  	digitalWrite(ledPin, HIGH);
  	  	Serial.println("On!"); //serial monitor to check in case of issue w/ wiring
  	  }


  	  if(photoState == LOW) { //When photointerrupter clear, LED off
  	   digitalWrite(ledPin, HIGH);
  	   Serial.println("Off!"); 

  	  }



}
