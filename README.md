# Automatic-night-lighted-system
We all know that the modern industries are focusing on automation of their processes. This project is an extension of industrial automation to the domestic side for better utilization of energy. Here we are planning and working on the automation of lighting systems of rooms. Through this project, we will be able to control the light and illumination. In short, we will able to control the light qualitatively as well as quantitatively. Here we are taking into account Human presence, Daylight level, Amount of illumination, Region of presence in a large room …
# Aim
To automatically power devices according to weather conditions based on highly sensitive sensors
To automatically turn ON and OFF lights as a person enters or leaves the room or a part of the room or the region in which we want to control the lights 
To control the lights of the big hall by turning ON the lights of that part only in which someone will be present keeping the remaining lights OFF
# Hardware description
1.	Arduino Uno 
2.	PIR Motion Sensor 
3.	LDR 
4.	Relay Module 
5.	Lamp 
6.	Breadboard
7.	Resister 10Kohm
# Arduino Uno
The Arduino Uno is an open-source microcontroller board based on the Microchip ATmega328P microcontroller and developed by Arduino.cc. The board has 14 digital pins and 6 Analog pin.
# PIR sensor
The PIR sensor stands for Passive Infrared sensor. It is a low-cost sensor that can detect the presence of Human beings or animals. There are two important materials present in the sensors one is the pyroelectric crystal which can detect the heat signatures from a living organism and the other is a Fresnel lens which can widen the range of the sensor.
# LDR
A Photoresistor (Light Dependent resistor or photo-conductive cell) is a light-controlled variable resistor. The resistance of a photoresistor decreases with increasing incident light intensity. A photoresistor is made of a high resistance semiconductor. In the dark, a photoresistor can have a resistance as high as several megaohms, while in the light, a photoresistor can have a resistance as low as a few hundred ohms
# Relay module
A relay is an electrically operated switch of main voltage. Its main use is controlling circuits by a low power signal or when several circuits must be controlled by one signal.
# Software setup required
Arduino IDE
# Block Diagram
https://github.com/Jinta2000/Automatic-night-lighted-system/blob/master/block%20diagram.png

# Circuit Diagram
https://github.com/Jinta2000/Automatic-night-lighted-system/blob/master/Circuit1.png
https://github.com/Jinta2000/Automatic-night-lighted-system/blob/master/Circuit2.png

# Working
We use Arduino UNO as our microcontroller. We program to sense the intensity of light and the presence of humans in a specific region. If the intensity is above a certain level and any human present, then the light will turn ON and otherwise turn OFF. This helps to save power and reduce human energy in normal conditions based on sensors to control the devices. We can control devices depend on sensor value. So we can save power.                        We use two sensors –LDR and PIR sensor- for the purpose. Through this project, we can control the LED working in 230V. We use a relay module for controlling LED working on 230V using a microcontroller working in 5V.
# Circuit Assembly
- Connect one of the LDR legs to the VCC and another leg to the A0 pin of Arduino (the required pin for LDR) and also to the resistor.
- Connect the resistor to the GND of the Arduino. 
- The output of PIR is connected to the 13th digital pin of Arduino.
- The GND and VCC of the PIR and relay modules are connected to GND and VCC respectively.
- We are using a relay as a switch to control high power devices.
- The OUT of relay module is connected to 8th pin of Arduino
- The bulb is connected to the relay module.
# Reference
https://create.arduino.cc/
