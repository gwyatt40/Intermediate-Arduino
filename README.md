# Intermediate Arduino


## LED Blink Revisited
### Description
  The goal of this assignment was to change the code of a simple LED blink project so that the LED would fade in and out instead of blinking. We also had to make the Serial Monitor display a wave of text as the brightness of the LED changed.
  
### Problems
The most difficult part of this project was definitely the code- the wiring was fairly simple since it was just review from last year. In addition to using analogwrite() for the first time, I had to create 2 different variables in order to have the brightness increase and decrease. Once I added in the Serial Monitor code, I ended up having to use even more variables, making my code increasingly complicated. Most of the issues I ran into were just because I had forgotten something from last year or didn't know how to use a new function. Luckily, I found a great arduino.cc page that helped with this (linked in the photos) One unsolved problem was that my LED would blink for just a second once it reached maximum brightness, but since this did not prevent it from dimming again and did not interrupt the Serial Monitor I just left it. 

### Pictures 

<img src = "https://www.arduino.cc/en/uploads/Tutorial/simplefade_bb.png" width="300">
 
 - Fritzing from [arduino.cc](arduino.cc/en/tutorial/fade)

### Lessons Learned
- Look for a website before you do anything else
- Always test your code in between changes
- Give your variables specific names

## Hello LCD

### Description
This was my first time ever using an LCD screen! The project was simply to wire one to an arduino and have it print the words "Hello World" above a timer counting the seconds since the program began.

### Problems
For the code, I had to figure out how to make a basic timer (which I did using a count function), download the Liquid Crystal library, and use LCD related functions for the first time (LCD.begin, etc). I could find info on most of the code through googling, though I was unable to find a site as comprehensive as the one for LED Fade. I also did have a bit of an issue with the Liquid Crystal library but I just had to download it and make sure it was saved in the correct place. The wiring was much, much more difficult. While the Adafruit page linked on Canvas was extremely helpful, it was still a bit confusing to connect all twelve (12!!) of the LCD pins to the correct places on the Arduino. It took several tries and lots of double-checking to make sure that everything was where it should be. I realized about halfway through that it would probably be a good idea to color code and customize my wires so that I could easily see where each one was connected. Even with this solution the wiring was still complicted and I was glad when we learned how to use the LCD Backpack!

### Pictures

<img src = "https://github.com/gwyatt40/Intermediate-Arduino/blob/master/Media/HelloLCDPhoto.jpg" width="300">

<img src = "https://github.com/jbrown56/Intermediate-Arduino/blob/master/hello_LCD/hello_lcd_fritzing.jpeg" width="300">

- Fritzing from [Justine's README](https://github.com/jbrown56/Intermediate-Arduino/blob/master/README.md)

### Lessons Learned
- Always color code and custom cut your wires!!
- If your Liquid Crystal has an error make sure it is downloaded and in the right folder
- Double-check each wire as you plug it in
- Be careful not to unplug or disturb any wires when putting things away
- Take photos of wiring at the end of each class, for documentation but also so you can remember where you were and not lose any progress if your project gets damaged

## LCD Backpack
This was the 2nd LCD assignment. It's goal was to use an LCD backpack to simplify the wiring for an LCD to Arduino setup.

## Problems
The wiring for this project was (thankfully) much easier than it had been for Hello LCD. Though there were only 4 wires from the LCD to the breadboard, color coding them was still very helpful. As for the code, downloading the new libraries was pretty straightforward, but I did encounter an issue when using the LiquidCrystal_I2C lcd(); function. My code was giving me a repeating error and I couldn't figure out why until I realized that on the Canvas page it says to use 0x27 as the LCD address originally, but, it the case of an error, to use 0x3. Once I switched these my code worked immediately and I was able to continue the project. The rest of the new LCD setup functions worked well and I didn't encounter any other issues that couldn't be fixed by quickly checking over my code or googling.

## Pictures

<img src = "https://github.com/gwyatt40/Intermediate-Arduino/blob/master/Media/LCDBackpackPhoto.png" width="300">

- Fritzing from [fritzing.org](https://fritzing.org/projects/arduino-i2c-lcd-display)



## Lessons Learned
- If you have an error, try switching 0x27 to 0x3
- Always read EVERYTHING on the Canvas page, including the code comments
- Double check your code for missing ) and ;, especially after adding things

## Photointerrupters
### Description
This assignment had two parts. First, we had to wire up a photointerrupter and an LED so that when something passed through the photointerrupter, the LED turned on. Next, we had to add an attachInterrupt() function to our previous basic loopcode so that the photointerrupter wouldn't miss anything that passed through it in less time than it took to run the loop.
### Problems
This was a pretty tricky assignment because we had to deal with not only the photointerrupter and all the new code that went along with that, but also the attachInterrupt() function. The most difficult thing about using the photointerrupter was finding one that worked. Many photointerrupters would flash when they sensed something but would fail to actually send any input to the arduino. This made it hard to tell whether your code/wiring was incorrect or if it was just an issue with the photointerrupter. I went through several trials of photointerrupters, even soldering one myself, before finally just using one that Justine had used before me and knew worked. For attachInterrupt() function we not only had to figure out how to add the function itself, but also had to coordinate the pins for it. The digital input pins are weird (0=pin 2, 1=pin 3, etc) and I had several problems with making sure the pin in my code corresponded with the pin I had plugged in. Towards the end of the project, my code was running correctly but my project still wasn't working, my Serial Monitor wasn't printing, and I didn't know why. It turned out that I had been using the wrong pin and I had wasted several class periods trying to figure out what was wrong when the issue was very simple.

### Pictures

<img src = "https://github.com/jbrown56/Intermediate-Arduino/blob/master/photo_interruptor/Photo_fritzing.png" width="300">

- Again, fritzing credit to [Justine!](https://github.com/jbrown56/Intermediate-Arduino/blob/master/README.md)

### Lessons Learned
- FIND A WORKING PHOTOINTERRUPTER!!! (Seriously, before you do anything else) 
- Solder carefully (find a pre-soldered photointerrupter if possible)
- Check your pins, especially if using digital
- Just because your wiring looks like someone elses does not mean its right, your code is probably different
- Use your Serial Monitor to check! Always! Add it to your code before you add anything else!

## Potentiometers

### Description
We had to use the LCD Backpack again for this assignment, but with a new goal of using a potentiometer to change the brightness of an LED and to have the LCD display its value. 

### Problems
The LCD wiring and code was pretty much the same as in the last LCD assignment. I just had to remember to switch 0X27 with 0x3 again. The real challenge for this project was wiring and coding for the potentiometer. I decided that, in order to simplify things a bit, I would wire and code for the LED and potentiometer first (using a Serial Monitor of course) and then add in the LCD later. I found a code online for the potentiometer which read the potentiometer pin in order to create a variable called readValue(). The readValue() was then used to calculate another variable called writeValue() which was written to the LED. I definitely wouldn't have been able to figure out how to do this on my own (calculating writeValue() involves multiplying readValue() by 255./1023.) so I'm glad I looked up a code before attempting to write one. I also googled the fritzing which was fairly simple, just basic LED wiring plus a potentiometer with legs to ground, 5V, and pin. Once I got this working, adding in the LCD was fairly straightforward- I wired it up, put what the Serial Monitor was writing into lcd.print(), and added in the necessary setup/libraries. 

### Pictures
<img src = "https://github.com/gwyatt40/Intermediate-Arduino/blob/master/Media/PotentiometerPhoto.jpg" width="300" height= "400">

- I didn't include the LCD in this photo since its wiring was the same as in LCD Backpack. The only new wiring was the potentiometer and LED.


### Lessons Learned
- If assignments are a combination of multiple components, it's best to start with whats new
- If you find a code online, read through all of it to make sure its exactly what you need
- Review your past assignments in case of a problem, you might have solved it before


## Motor Control

### Description
The object of this assignment was to use a potentiometer to control the speed of a DC motor. To do this we had to use several new wiring components including a transistor, a diode, and a battery pack. 

### Problems
I had lots of issues with the wiring for this project, ranging from problems with the battery pack to problems with the direction of the diode. Since a battery pack was needed to power the motor (in addition to the computer powering the arduino), I had to find a battery pack that was wired and sautered to have exactly 6V of power. Luckily I was able to do this, but I had to test it a few times to make sure it worked and I kept forgetting what order the batteries went in to produce exactly 6V. After I got a working battery pack I had to deal with the rest of the wiring. There was a frtzing diagram on the Canvas page which was definitely helpful, but I wasn't able to figure out the finepoints of the wiring (pins etc.) from that alone. I some googling and copied some other people's fritzing but my wiring still tuned out really wrong and I made lots of silly mistakes (my diode was facing the way, etc). Once Mr. H showed me how to fix my wiring, it turned out that my code (which was pretty simple) was ok and I got my project to work. I probably should have tried to find a really reliable fritzing diagram on Google instead of trying to piece together my wiring from random Arduino forums and what I saw of other people's projects. 

### Pictures
<img src = "https://github.com/gwyatt40/Intermediate-Arduino/blob/master/Media/MotorControlPhoto.jpg" width="300">

- There wasn't room to include the motor in this photo, but you can see its red and blue wires. 

### Lessons Learned
 - Check you battery pack and individual batteries before doing anything else
 - To be safe, unplug battery pack and remove all batteries before storing
 - Always make sure that the basic layout of your wiring (what goes where) is correct (Google!) before you try to adress any other problems
 - If your general wiring seems to be ok but your project is still not working, THEN check each individual wire and component to make sure that it  works and is in the right place/direction
 - If at all possible, find a good fritzing diagram online to guide your wiring
 
