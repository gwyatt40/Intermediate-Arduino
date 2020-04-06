# Intermediate Arduino


## LED Blink Revisited
### Description

Goal: To make an LED gradually fade in and out over time and have the Serial Monitor display a wave of text corresponding to its brightness. 

Steps: The first step was writing a basic [LED Blink](https://www.Arduino.cc/en/tutorial/blink) code and wiring up and LED to resistor circuit. Then I switched the analogWrite() function to digitalWrite() (as described on the Canvas page) and created a variable called brightness that would be written to the LCD. I created another variable called fadeAmount and set that equal to 10. I used if statements to make it so when the brightness was less than 200, it increased in increments of fadeAmount (10) and when it was equal to 200 it began to decrease. Initial brightness was 0. 

### Code
[LED Fade Code](https://github.com/gwyatt40/Intermediate-Arduino/blob/master/LED_Blink_Revisited/LED%20Blink.ino)
  
### Pictures 

<img src = "https://www.Arduino.cc/en/uploads/Tutorial/simplefade_bb.png" width="600">
 
 - Fritzing from [Arduino.cc](Arduino.cc/en/tutorial/fade)
  
### Problems
The only problem I encountered during this project was that my LED would blink off for a second just after it reached maximum brightness. I tried to fix this but, after realizing it did not prevent the LED from dimming or affect my Serial Monitor, I just left it. 

### Lessons Learned
- Look for a website before you do anything else
- Always test your code in between changes
- Give your variables specific names

## Hello LCD

### Description
Goal: The project was to wire an LCD to an Arduino and have it print the words "Hello World" and a timer counting the seconds since the program began. 
Steps: To begin, I wired the LCD to the Arduino following the steps from the [Adafruit page linked on Canvas](https://learn.adafruit.com/character-lcds/wiring-a-character-lcd). Then I started a code using the setup libraries from the Canvas assignment page. I used lcd.begin(), lcd.setcursor(), and lcd.print() to print Hello World! on the first line of the LCD. I put this in void setup(). Then I went to void loop() created a timer function and set the cursor to the second line so that the timer was displayed at the bottom of the LCD. 


### Code
[Hello LCD Code](https://github.com/gwyatt40/Intermediate-Arduino/blob/master/Hello_LCD/Hello_LCD.ino)

### Problems
When I first ran my code I encountered an error with the Liquid Crystal library. I fixed this by downloading the library and double-checking that it was saved to the correct folder. 

### Pictures

<img src = "https://github.com/gwyatt40/Intermediate-Arduino/blob/master/Media/HelloLCDPhoto.jpg" width="600">

<img src = "https://github.com/jbrown56/Intermediate-Arduino/blob/master/hello_LCD/hello_lcd_fritzing.jpeg" width="600">

- Fritzing from [Justine's README](https://github.com/jbrown56/Intermediate-Arduino/blob/master/README.md)

### Lessons Learned
- Always color code and custom cut your wires!!
- If your Liquid Crystal has an error make sure it is downloaded and in the right folder
- Double-check each wire as you plug it in
- Be careful not to unplug or disturb any wires when putting things away
- Take photos of wiring at the end of each class, for documentation but also so you can remember where you were and not lose any progress if something gets unplugged

## LCD Backpack

### Description
Goal: The objective was to use an LCD backpack to simplify LCD wiring and then to use that LCD to count how many times a button had been pressed. 
Steps: The wiring involved adding on an LCD backpack, connecting it to corresponding pins, and adding a button to the breadboard. I started the code with the new LCD backpack-specific setup functions and libraries. I added Hello World! code, similar to the code from the previous LCD assignment and then set the pin for the button and wrote a count function that increased the variable 'count' when the button state was detected as HIGH. I then made the LCD display the count value on the second line. 


### Code
[LCD Backpack Code](https://github.com/gwyatt40/Intermediate-Arduino/tree/master/LCD_Backpack)


## Problems

My code gave me  a repeating error concerning the LiquidCrystal_I2C lcd(); function. I fixed this by following the Canvas instructions that recommended changing the LCD address from 0x27 to 0x3 in the case of an error. 

## Pictures

<img src = "https://1.bp.blogspot.com/-KjSlG2xPzr8/WWMsfXNUFaI/AAAAAAAAZqU/UCQVEL_j23AtU25wtjEGKUnuaajmlbQbwCLcBGAs/s1600/LCD1602_bb.png" width="600">

- Fritzing from [a blog page on LCD backpack](https://rohling-de.blogspot.com/2017/07/text-on-your-display.html)



## Lessons Learned
- If you have an error, try switching 0x27 to 0x3
- Always read EVERYTHING on the Canvas page, including the code comments
- Double check your code for missing ) and ;, especially after adding functions/variables

## Photointerrupters
### Description
Goal: The goal of this project was to make an LED light up in response to an object passing through a photointerrupter and then to add in an attachInterrupt() function to make this process more efficient. 

Steps: For the first part of the project I wired up a photointerrupter to a basic LED circuit, following the instructions on Canvas. After I completed the wiring, I wrote a code that used if statements to turn the LED on when the photointeruppter was activated and off when it was not. One important element of this code was that the photopin was set as INPUT_PULLUP instead of as simply INPUT, so that the input pin would be held constantly at 5V until something interrupted the photointerrupter, which would cause it to go low and allow the change in voltage to be detected. For the second code, I created the variables int on() and int off() first, Int on() turned the LED on and added 1 to the variable 'interrupt', which would be printed by the Serial Monitor to measure how many times the photointerrupter had been activated. The int off() variable simply turned the LED off. I then added in atttachInterrupt functions to void setup which ran int on() when the photointerrupter state was RISING and int off() when it was falling. In the void loop() I added an if statement where the Serial Monitor printed the variable interrupt when the LED was on. 

### Code
[Photointerrupter Loop Code](https://github.com/gwyatt40/Intermediate-Arduino/blob/master/Photointerrupter_LED_1/PhotointerrupterLED_1.ino)

[Photointerrupter Attach Interrupt Code](https://github.com/gwyatt40/Intermediate-Arduino/blob/master/Photointerrupter_LED_2/PhotointerrupterLED_2.ino)


### Problems
Finding a photointerrupter that worked was difficult so, after many trials, I just ended up using one that Justine had used before me so I could be sure that it worked. 
I accidentally had the wrong input pin in my code for a while, which was more human error than an actual technical problem, but remember to double check your pins!

### Pictures

<img src = "https://github.com/jbrown56/Intermediate-Arduino/blob/master/photo_interruptor/Photo_fritzing_new.png" width="600">

- Again, fritzing credit to [Justine!](https://github.com/jbrown56/Intermediate-Arduino/blob/master/README.md)

### Lessons Learned
- FIND A WORKING PHOTOINTERRUPTER!!! (Seriously, before you do anything else) 
- Solder carefully (find a pre-soldered photointerrupter if possible)
- Check your pins, especially if using digital
- Just because your wiring looks like someone else's does not mean it's right, its likely your code is different
- Use your Serial Monitor to check! Always! Add it to your code before you add anything else!

## Potentiometers

### Description
Goal: The goal of this project was to change the brightness of an LED with a potentiometer and to display its brightness value on an LCD screen. 

Steps: I dealt with wiring up and coding for the LED potentiometer control first. I used a code I found online which effectively converted the potentiometer value into a brightness that could be written by the LED. I then wired up the LED to the potentiometer circuit and double checked the code. After I had made sure that the code was correct, I added an LCD-backpack setup to the circuit and added appropriate LCD libraries and setup functions to the code. Then I wrote to the LCD the same thing that the Serial Monitor had been printing in the original code. 

### Code
[Potentiometer Code](https://github.com/gwyatt40/Intermediate-Arduino/tree/master/Potentiometer)


### Problems
The only minor problem I encountered with this project was, again, switching the LCD address from 0x27 to 0x3.
### Pictures
<img src = "https://github.com/gwyatt40/Intermediate-Arduino/blob/master/Media/PotentiometerPhoto.jpg" width="600" height= "700">

- I didn't include the LCD in this photo since its wiring was the same as in LCD Backpack. The only new wiring was the potentiometer and LED.


### Lessons Learned
- If assignments are a combination of multiple components, it's best to start with whats new
- If you find a code online, read through all of it to make sure its exactly what you need
- Review your past assignments in case of a problem, you might have solved it before


## Motor Control

### Description
Goal: The object of this assignment was to use a potentiometer to control the speed of a DC motor. 
Steps: The first thing I did was set up the wiring, because that was the trickiest part of the project with the most new components. I got the battery pack working and sautered it to have exactly 6V. Then, I wired up the circuit, connecting the motor, transistor, diode, potentiometer, and battery pack. Next, I wrote a code that read the value of the potentiometer and converted it into a speed that would be written by the motor. 

### Code
[Motor Control Code](https://github.com/gwyatt40/Intermediate-Arduino/blob/master/Motor_Control/Motor_Control.ino)  

### Problems
I made a couple mistakes with my wiring which I fixed with the help of Mr. H and Google.  Besides this, I didn’t really encounter any major issues during this project, though the wiring problems were definitely time consuming. 

### Pictures
<img src = "https://github.com/gwyatt40/Intermediate-Arduino/blob/master/Media/MotorControlPhoto.jpg" width="600">

- There wasn't room to include the motor in this photo, but you can see its red and blue wires. 

### Lessons Learned
 - Check you battery pack and individual batteries before doing anything else
 - To be safe, unplug battery pack and remove all batteries before storing
 - Always make sure that the basic layout of your wiring (what goes where) is correct (Google!) before you try to address any other problems
 - If your general wiring seems to be ok but your project is still not working, THEN check each individual wire and component to make sure that it  works and is in the right place/direction
 - If at all possible, find a good fritzing diagram online ASAP to guide your wiring

