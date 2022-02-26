# CURRENCY NOTE DETECTION FOR BLIND PEOPLE USING UV LIGHT AND MICROCONTROLLER WITH THEFT ALERT

# REQUIERMENTS

# A. EMBEDDED SYSTEM PLATFORM
Embedded systems are like computer systems which have processors, memory and
input/output peripheral devices. The Programming instructions are stored in readonly memory or flash memory chips.
# B. ARDUINO UNO BOARD
Arduino is an open-source computer hardware and software company, project and
user community that designs and manufactures kits for building digital devices and
interactive objects that may sense and manage the physical world. It's an open
source microcontroller based on ATmega328P developed by Arduino. It has 14
digital inputs and 6 analog input pins. It is programmed by Arduino IDE and is
connected to the computer by a cable. It can also be powered by an external
battery. It has a flash memory of 32kb out of which 0.5kb is used for the
bootloader. Along with ATmega328P, it also contains other components like
crystal oscillator, serial communication, voltage regulator, etc to support the
microcontroller.
It has 6 analog input pins (AO - A5) where we can provide analog inputs in the
range of 0-5V. It is also accompanied by 14 digital pins (D0 - D13) which can
either be used as input or output. It is powered by an Atmega328 processor
operating at 16MHz, includes 32KB of program memory, 1 KB of EEPROM, 2KB
of RAM, has 14 digital I/O, 6 analog inputs, and both 5Vand 3.3V power rails.
It's also easy to interface with the sensors and easy to code. Both C and C++ can be
used for programming the microcontroller.
# C. TCS3200 COLOR SENSOR
TCS3200 Color Sensor is implemented here for the identification of color from the
currency notes. It is a programmable color to light frequency convertor. Voltage
ranging from 2.7V-5.5V is enough for the operation ofthe sensor. It has a power
down feature. The particular reason for choosing this color sensor is to avoid the
filtering of UV light by in-built UV light filters in certain other color sensors.
They contain four white LEDs to even detect color in the darkest surrounding.
These four white LEDs illuminate the surface of the object whose color needs to be
detected. It has 64 photodiodes. These photodiodes have four different types of
filters Red, Green, Blue and Clear. So 16 filters for each color respectively. We
have two different control pins s2 and s3 with which we can decide what color to
read.
|S2| S3| Color|
|--|--|--|
|LOW |LOW| Red|
|LOW| HIGH| Blue|
|HIGH| LOW| Clear|
|HIGH| HIGH |Green|
 
 Color Sensor Photodiode Combination
With this color we can not only detect the primary colors but also wide range of
colors if we fix the perfect frequency
# D. UV LED
The need for UV LED in this project is for identifying the legitimacy of the
currency notes. Indian currency notes absorb UV light while normal papersor the
fake currency notes used in monopoly do not absorb them. This principle is used
for identification of real currency notes. The UV Led used for this project has a
frequency of 390-395nm.
UV LEDs can work within the range of 3V to 5V. They are also effective in
sterilization and disinfection.
# E. GSM MODULE (SIM808)
The module SIM808 is a dual function module which provides both GSMand
GPS functions. It consumes very less power and is controlled by AT command via
UART.
It supports a real time clock and is helpful in sending and receiving messages, real
time tracking. It can be connected to the internet and the location can be sent as a
message in real time. It can be used with the Arduino with the help of GSM
Library.
