//LED Fade Code
//Georgia Wyatt
/* Uses an analogWrite function with variables brightness and fadeAmount to increase and decrease an LED's brightness over time*/

int led = 11; //LED pin
int brightness = 0; //sets original brightness
int fadeAmount = 10; //variable for change in brightness

void setup() {
 
  pinMode(led, OUTPUT); //Sets LED pin as OUTPUT
}

void loop() {

  if(brightness<200){

  analogWrite(led, brightness);
  brightness = brightness + fadeAmount;  //When brightness is less than 200 it increases in increments of 10

  }
 
 
  if(brightness=200){

  analogWrite(led, brightness);
  brightness = 0;  //Once brightness reaches 200 it reverts to 0 and decreases again
  delay(1000); //The delay is nessecary so fade is slow enough to be noticeable
  
  }


}
