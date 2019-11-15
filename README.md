# Intermediate_Arduino



## LED Blink Revisited

### Descriotion
  The goal of this assignment was to change the code of a simple LED blink project so that the LED would fade in and out instead of blinking. We also had to make the Serial Monitor display a wave of text was the brightness of the LED changed.
  
### Problems
The most difficult part of this project was definitely the code- the wiring was fairly simple since it was just review from last year. In addition to using analogwrite() for the first time, I had to create 2 different variables in order to have the brightness increase and decrease. Once I added in the Serial Monitor code, I ended up having to use even more variables, making my code increasingly complicated. Most of the issues I ran into were just because I had forgotten something from last year or didn't know how to use a new function. Luckily, I found a great arduino.cc page that helped with this (linked in the photos) One unsolved problem was that my LED would blink for just a second once it reached maximum brightness, but since this did not prevent it from dimming again and did not interrupt the Serial Monitor I just left it. 
### Pictures 

<img src = "https://www.arduino.cc/en/uploads/Tutorial/simplefade_bb.png" width="400">
 
 - Photo from arduino.cc/en/tutorial/fade

### Lessons Learned
- Look for a website before you do anything else
- Always test your code in between changes
-

## Hello LCD

### Description
This was my first time ever using an LCD screen! The project was simply to wire one to an arduino and have it print the words "Hello World" above a timer counting the seconds since the program began.

### Problems
Besides having to figure out how to make a basic timer (which I did using a count function) and having to download the Liquid Crystal library and use LCD related functions for the first time (LCD.begin, etc) the code for this project wasn't to complicated. I could find info on most of the code through googling, though I was unable to find a site as comprehensive as the one for LED Fade. I also did have a bit of an issue with the Liquid Crystal library but I just had to download it and make sure it was saved in the correct place. The wiring was much, much more difficult. While the Adafruit page linked on Canvas was extremely helpful, it was still a bit confusing to connect all twelve (12!!) of the LCD pins to the correct places on the Arduino. It took several tries and lots of double-checking to make sure that everything was where it should be. 

### Pictures


### Lessons Learned
- Always color code and custom cut your wires!!
- If your Liquid Crystal has an error make sure it is downloaded and in the right folder
- Double-check each wire as you plug it in
- Be careful not to unplug or disturb any wires when putting things away

## LCD Backpack
This was the 2nd LCD assignment. It's goal was to use an LCD backpack to simplify the wiring for an LCD to Arduino setup.

## Problems
The wiring for this project was (thankfully) much easier than it had been for Hello LCD. Though there were only 4 wires from the LCD to the breadboard, color codphoing them was still very helpful. As for the code, downloading the new libraries was pretty straightforward, but I did encounter an issue when using the LiquidCrystal_I2C lcd(); function. My code was giving me a repeating error and I couldn't figure out why until I realized that on the Canvas page it says to use 0x27 as the LCD address originally, but, it the case of an error, to use 0x3. Once I switched these my code worked immediately and I was able to continue the project.The rest of the new LCD setup functions worked well and I didn't encounter any other issues that couldn't be fixed by quickly checking over my code or googling.

## Pictures

## Lessons Learned
- If you have an error, try switching 0x27 to 0x3
- Always read EVERYTHING on the Canvas page, including the code comments
- Double check your code for missing ) and ;, especially after adding things

## Photointerrupters
### Description
This assignment had two parts. First, we had to wire up a photointerrupter and an LED so that when something passed through the photointerrupter, the LED turned on. Next, we had to add an attachInterrupt() function to our previous basic loop() code so that the photointerrupter wouldn't miss anything that passed through it in less time than it took to run the loop.
### Problems
This was a pretty tricky assignment because we had to deal with not only the photointerrupter and all the new code that went along with that, but also the attachInterrupt() function. The most difficult thing about using the photointerrupter was finding one that worked. Many photointerrupters would flash when they sensed something but would fail to actually send any input to the arduino. This made it hard to tell whether your code/wiring was incorrect or if it was just an issue with the photointerrupter. I wet through several trials of photointerrupters, even soldering one myself, before finally just using the one Justine had used before me and knew worked. For attachInterrupt() function we not only had to figure out how to add the function itself, but also had to coordinate the pins for it. The digital input pins are weird (0=pin 2, 1=pin 3, etc) and I had several problems with making sure the pin in my code corresponded with the pin I had plugged in. Towards the end of the project, my code was running correctly but my project still wasn't working, my Serial Monitor wasn't printing, and I didn't know why. It turned out that I had been using the wrong pin and I had wasted several class periods trying to figure out what was wrong when the issue was very simple.
### Pictures

### Lessons Learned
- FIND A WORKING PHOTOINTERRUPTER!!! (Seriously, before you do anything else) 
- Solder carefully (find a pre-soldered photointerrupter if possible)
- Check your pins, especially if using digital
- Just because your wiring looks like someone elses does not mean its right! Your code may be different!
-Use your Serial Monitor to check! Always! 

## Potentiometers

### Description
We had to use the LCD Backpack again for this assignment, but with the added challenge of using a potentiometer to change to brightness of an LED and have the LCD display its value. 

### Problems
The LCD wiring and code was pretty much the same as in the last LCD assignment I . The real challenge for this project was wiring and coding for the potentiometer. 

## Motor Control
