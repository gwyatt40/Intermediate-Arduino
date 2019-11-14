

int led = 11;
int brightness = 0;
int fadeAmount = 10;

void setup() {
 
  pinMode(led, OUTPUT);
}

void loop() {

  if(brightness<200){

  analogWrite(led, brightness);
  brightness = brightness + fadeAmount; 

  }
 
 
  if(brightness=200){

  analogWrite(led, brightness);
  brightness = 0; 
  delay(1000);
  
  }


}
