
int photoPin = 2;
int ledPin = 8;
int photoState = 0;
int interrupt = 0;

int on(){
digitalWrite(ledPin, HIGH);
delay(100);
interrupt = interrupt +1;
}

int off() {
digitalWrite(ledPin, LOW);
delay(100);
}



void setup(){
Serial.begin(9600);
pinMode(photoPin, INPUT_PULLUP);
pinMode (ledPin, OUTPUT);
attachInterrupt(digitalPinToInterrupt(3), off, FALLING);
attachInterrupt(digitalPinToInterrupt(2), on, RISING);

}

void loop() {
if(on){
Serial.println(interrupt);
delay(100);
}
}