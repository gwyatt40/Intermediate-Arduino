
int photoPin = 2;
int ledPin = 8;
int photoState = 0;
int interrupt = 0; //The interrupt variable counts how many times to photointerrupter has sensed something 

int on(){  //LED functions are set as integers instead of in void loop()
digitalWrite(ledPin, HIGH);
delay(100);
interrupt = interrupt +1; //The varible interrupt increases everytime the LED blinks
}

int off() {
digitalWrite(ledPin, LOW);//When the photointerrupter is not activated, the LED is off
delay(100);
}



void setup(){
Serial.begin(9600);
pinMode(photoPin, INPUT_PULLUP);
pinMode (ledPin, OUTPUT);
attachInterrupt(digitalPinToInterrupt(3), off, FALLING); //When the photointerrupter senses falling movement, int off() is run
attachInterrupt(digitalPinToInterrupt(2), on, RISING); //When the photointerrupter senses rising movement, int on() is run

}

void loop() {
if(on){
Serial.println(interrupt); //Printing the variable interrupt allows the Serial Monitor to count LED blinks/photointerrupter activations
delay(100);
}
}
