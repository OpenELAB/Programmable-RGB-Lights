
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;__ Hi! 👋__. This project is a super cool little programmable RGB light idea! RGB lights are made up of LEDs in the three basic colors of red, green, and blue, and by adjusting their brightness, they can be mixed to create almost any color of light ✨. Want romantic pink or cool purple-blue? Easy peasy! 🎨.
Whether you want to create a cozy atmosphere or a sparkling light show, this RGB light project will allow you to play around and light up your creative inspiration! 🚀
![QQ20241009-114523](https://github.com/user-attachments/assets/fe60ac31-4235-4fdc-ab48-8893f06db0f1)  

Next, the following steps 📜 will take you deeper into the source code to easily get started with this project! Ready to get started? Let's get started 🚀!
- 📝 Project Description
- ✨ Functional Features
- 🏗 Project Structure
- 🚀 Installation and Operation
# M5StickCPlus2_Slot Project
## Project Information.
Adjusting the brightness of RGB lights is actually quite simple - it's done by adjusting the amount of current. We usually use **PWM (Pulse Width Modulation)** technology, which changes the brightness by controlling the proportion of time that the LED is "switched on and off" 💡. You can use a microcontroller or other control chip to send control signals to the PWM controller to control the current intensity of the red, green and blue colors, the PWM controller will be based on these signals to adjust the brightness of each color, thus creating a variety of dazzling lighting effects 🌈.

## Functional Features

- 🌈 Colorful: support a variety of color combinations, programmable control to achieve cool lighting effects, light up your creative space.
- 🔧 DIY fun: the programmable design allows you to give free play to set various lighting modes to meet personalized needs.
- 🔧 Low Power Consumption and High Brightness: High-efficiency LED light beads, both low power consumption and high brightness, make your light show shine for a long time.
- 🤖 Intelligent control: compatible with a variety of control platforms, easily programmed through Arduino, ESP32, etc. to create a unique lighting experience.

## Project structure
``` 
│──  README.md                # Project description document
│──  All_light                # Ring Full Light Source Code Folder
  │──  Adafruit_NeoPixel.cpp    # library file
  │──  Adafruit_NeoPixel.h      # library file
  │──  All_light.ino            # Ring Lights Full Brightness Core Documentation
│──  Breathing_light          # Breathing Light Source Code Folder
  │──  Adafruit_NeoPixel.cpp    
  │──  Adafruit_NeoPixel.h
  │──  Breathing_light.ino      # Breathing light core document
│──  Marquee                  # Running Lights Source Code Folder
  │──  Adafruit_NeoPixel.cpp    
  │──  Adafruit_NeoPixel.h
  │──  Marquee.ino              # Running Lights Core Documents
│──  Water_light              # Flow Lamp Source Code Folder
  │──  Adafruit_NeoPixel.cpp    
  │──  Adafruit_NeoPixel.h
  │──  Water_light.ino          # Flow lamp core document
```
## Installation and operation

### precondition
Software relies on: __Arduino IDE__ etc.
Hardware Requirements: Three DuPont cables, programmable RGB lights, serial cable, etc.
Requirements: __Arduino library__ etc.
### Arduino IDE Installation Steps
```
Link: upload later
```
### Pinout and Wiring
- VIN: The VCC pin should be connected to the 3.3V power supply pin of the ESP32 development board or other compatible development board (or select the appropriate operating voltage according to the sensor specifications).
- GND: Reference ground.
- RGB：Send control signal
- NC：No connection required
- Other pins: Programmable GPIO pins for additional functions such as measurement preparation and threshold interrupts.

![img_v3_02fg_f45c86a3-daa3-4cd9-a5e0-29b4eccc908g](https://github.com/user-attachments/assets/85d69e81-5d29-4847-a2c9-6c80886ce5a4)

### concrete step
1. Connect the Arduino UNO using the serial cable.
2. Follow the wiring diagram to connect the Arduino and the programmable RGB lights, then connect the serial port to the computer USB port.
3. Select the corresponding file of the effect you want to achieve, so as to light up all the lights, running lights, running lights, breathing lights, respectively.
4. As an example, open the Marquee routine file, open Marquee.ino

### compile and run
1、After completing the installation of the dependencies, open the good downloaded zip archive
![QQ_1728457842374](https://github.com/user-attachments/assets/d4cb7dbe-b520-4aec-bbba-1f9dd92f6777)

2、Use a serial cable to connect to your computer and select Tools->Port to choose your port. 

![QQ_1728447726462](https://github.com/user-attachments/assets/4ba17432-2bd4-4e50-86ff-4246dd5b8a97)

3、Click on compile and then click on upload when the compilation is complete  

![QQ_1728447814719](https://github.com/user-attachments/assets/72e4abd5-63c5-4bc8-ac12-eebb229b38f0)

## How to contact the maintainer or developer
__OpenELAB:__   
[![OpenELAB_logo_resized_150](https://github.com/user-attachments/assets/5d3de375-359c-46a3-96bb-aaa211c6c636)](https://openelab.io)  
__YouTube:__  
[![youtube_logo_200x150](https://github.com/user-attachments/assets/d2365e7f-4ffe-4124-bf62-21eba19a71e4)](https://www.youtube.com/@OpenELAB)  
__X :__  
[![X_logo_150x150](https://github.com/user-attachments/assets/4ad5095f-2573-4791-9360-b355530093bf)](https://twitter.com/openelabio)  
__FaceBook:__  
[![facebook_logo_cropped_150x150](https://github.com/user-attachments/assets/52f2dc9a-a564-49a5-b72e-30eafbbc281f)](https://www.facebook.com/profile.php?id=61559154729457)  
__Discord__  
[![resized_image_150x150](https://github.com/user-attachments/assets/93ecd098-3391-45bb-9d80-b166c197a475)](https://discord.gg/VQspWyck)  
