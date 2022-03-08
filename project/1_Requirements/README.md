# ABSTRACT
Being born with disabilities is a common thing nowadays. But only the person having the disability has to endure the pain and sufferings caused by it. One of the disabilities among those is blindness. It's hard for blind people to do any work by themselves. Also it’s definitely not easy for them to identify the currency notes. And the basic idea of this project is to make it possible for them to identify currency notes easily. This is made possible with just a simple Arduino board basedon ATmega328P, UV LED and a TCS320color Sensor. ATMEGA328P is an 8- bit microcontroller based on AVR RISC architecture. UV LED helps to identify the legitimacy of the currency notes. Thecolor sensor identifies the color of the currency notes and sends it to the microcontroller which identifies whether it is a two thousand or five hundred rupee note etc. The detected color is read out loud via a speaker or an earphone as its respective currency value. This is the first ever smart wallet using Arduino and a color sensor. This is very easy to build and information about the total money taken out from the wallet can be sent to mobile phones if needed.

# INTRODUCTION

## GENERAL
Recognition of things is the most difficult task a blind person goes through. Especially in the identification of currency notes it’s very true. Normally a blind person has two most important difficulties while identifying a currency note. First the person needs to know the legitimacy of the note and second they need to identify its value. Usually a blind person identifies the legitimacy of the currency note using the raised printing of the Mahatma Gandhi portrait and the Ashoka Pillar emblem on the right side of the currency note. Also there are different shapes toidentify the value of the notes with some raised lines on the right side of the note. There are also braille markings on the side of the currency notes. But these markings tend to fade away in due course of time. In case if the person is not able to differentiate the value using the shapes and the lines, this methodcan be a life saver. This method is implemented using embedded systems, which can simply be understood as software embedded on a hardware device. Microcontrollers are a part
of this embedded system. They are like a small computer on a single IC chip. Arduino is an open source electronic platform which is an easy to use hardware and software.It is less expensive when compared to other microcontrollers and works on nearly every operating system. They are easy to code and open source. They require only 5V of power to operate. They also have both analog and digital inputs. It is the most popular Arduino.

# AIMS AND OBJECTIVES OF THE PROJECT

 Using a microcontroller to design and develop a prototype of a smart walletwhich
helps blind people to identify the Indian currency notes.
 Facilitating easy identification of currency notes by blind people.
 Identifying the legitimacy of currency notes.
 Providing an easy identification of the denomination or value of the currency notes
for the blind people.
 Implementing a theft alert system which sends an alert message in case of
emergency

# SCOPE OF THE WORK
🞄 India has an estimated number of 12 million blind people from 2000 to 2020.
According to the above data, India has around one-third blind people among the
world’s blind population. In a rapidly developing country like India, money is of
much importance. It is even more important to the blind people than anybody else.
🞄 Even though there are intaglio markings on the notes that can be detected by
touching, these markings can fade away during the course of time. Also, the shapes
and lines in the notes are not easily identifiable by everyone. This comes in
handy during such cases and it is precise and user friendly as it reads the values of
the currency notes through a speaker or an earphone.
🞄 It is portable, affordable, time saving and consumes less energy and would be easily
available to everyone everywhere. In future this can be enhanced sothat it makes a
calculation of money spent per day and can be sent as SMS tomobile phones.
🞄 Microcontrollers are optimized to perform a dedicated low-power application and
ideal for embedded systems. Microcontroller projects are very easy touse and
maintenance is very simple.

# High Level    Requirements

| HLR|Components|Description|
|--|--|--|
|HLR_01|Arudino UNO|This microcontroller acts as a mini computer, coupled with built in functions to program and interface with GSM module and Color Sensor|
|HLR_02|Bread board and jump wires|Bread board is used for connecting circuits without the need for wires and jumper wires help establish connection |
|HLR_03|GSM SIM808A Module|This module consists of a GPRS SMA Antenna, GSM SMA Bluetooth Antenna, GSM SMA Antenna. It helps in providing the call feature and SMS options from                               the module (SIM Card         included) to another mobile phone, depending upon the strength of the antenna use|
|HLR_04|TCS3200|As the name suggests, it is used for the identification of color|
|HLR_05|9V Battery with 2pc Connector|To provide the power supply for UV LED'S|
|HLR_06|0.5W Speaker|To hear the Audio|
|HLR_07|UV LEDs|For the identification of fake notes|

# Lower Level Requirements
|LLR|DESCRIPTION|
|--|--|
|LLR_01|The circuit is designed in such a way that the UV light falls on the currency note  and where the color sensor can detect the color of the currency note (i.e. The UV           light is placed below and the color sensoris at the top. The currency note is placedin between this setup|
|LLLR_02|Then the code is uploaded into the board via USB cable connecting the PC and Board where the color sensor is connected in its digital port|
|LLR_03|First the currency note is placed between the UV Led and the color sensor|
|LLR_04|Now first, we keep the original note and record the RGB frequency. Repeat the same for a fake note of same denomination|
|LLR_05|If we consider a 10 rupee note, the frequency read by the color sensor for a real note under UV light is different from the frequency of a fake note under the same.This          frequency is pre coded in the Arduino software by us so that if the particular frequency is detected, the audio message can be played accordingly|
|LLR_06|Now we upload the main code of our project which contains the audio output part|
|LLR_07|If it is a legit currency note, the UV light gets absorbed by it. Then the color of the note is identified by the color sensor and then the value of the currency note           is read out loud by the speaker|
|LLR_08|If it is not a legit currency note then the UV light doesn't get absorbed and the speaker will read it as "Fake Note"|
|LLR_09|The frequency values and the denominated values of the currency notes can also be seen in the serial monitor|
|LLR_10|When there is a situation of possible theft the user can use the implemented GSM  module which will send an alert message and their real time location to their friends         or family|

# swot analysis
![Screenshot (8)](https://user-images.githubusercontent.com/98890597/157069214-9f2d02fe-b8ce-4171-a700-f499ce378307.png)

# 4w's and 1 h
![WhatsApp Image 2022-03-08 at 2 55 09 PM](https://user-images.githubusercontent.com/98890597/157219917-3aae3374-f710-434e-9a2c-06aeb25773ed.jpeg)

# A.EMBEDDED SYSTEM PLATFORM
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
![WhatsApp Image 2022-03-08 at 4 10 50 PM](https://user-images.githubusercontent.com/98890597/157223765-a8f4532e-51c7-4213-9796-4c717403588c.jpeg)

# C. TCS3200 COLOR SENSOR
TCS3200 Color Sensor is implemented here for the identification of color from the
currency notes. It is a programmable color to light frequency convertor. Voltage
ranging from 2.7V-5.5V is enough for the operation ofthe sensor. It has a power
down feature. The particular reason for choosing this color sensor is to avoid the
filtering of UV light by in-built UV light filters in certain other color sensors
They contain four white LEDs to even detect color in the darkest surrounding.

![WhatsApp Image 2022-03-08 at 4 10 50 PM (1)](https://user-images.githubusercontent.com/98890597/157224112-07ddfce2-0ec9-4947-9218-075e39d8340b.jpeg)

These four white LEDs illuminate the surface of the object whose color needs to be
detected. It has 64 photodiodes. These photodiodes have four different types of
filters Red, Green, Blue and Clear. So 16 filters for each color respectively. We
have two different control pins s2 and s3 with which we can decide what color to
read.
|S2| S3 |Color|
|--|--|--|
|LOW |LOW |Red|
|LOW| HIGH| Blue|
|HIGH| LOW| Clear|
|HIGH |HIGH |Green|

With this color we can not only detect the primary colors but also wide range of
colors if we fix the perfect frequency.

# D. UV LED
The need for UV LED in this project is for identifying the legitimacy of the
currency notes. Indian currency notes absorb UV light while normal papersor the
fake currency notes used in monopoly do not absorb them. This principle is used
for identification of real currency notes. The UV Led used for this project has a
frequency of 390-395nm.
![WhatsApp Image 2022-03-08 at 4 10 50 PM (2)](https://user-images.githubusercontent.com/98890597/157224385-53f2619c-f7e0-4750-b9f1-3240debc8a43.jpeg)


UV LEDs can work within the range of 3V to 5V. They are also effective in
sterilization and disinfection.

# E. GSM MODULE (SIM808)
The module SIM808 is a dual function module which provides both GSMand
GPS functions. It consumes very less power and is controlled by AT command via
UART.
It supports a real time clock and is helpful in sending and receiving messages, real
time tracking. It can be connected to the internet and the location can be sent as a
message in real time. It can be used with the Arduino with the help of GSM
Library
![WhatsApp Image 2022-03-08 at 4 10 50 PM (3)](https://user-images.githubusercontent.com/98890597/157224527-d616e9c1-fb68-44b8-a55a-caff29de4385.jpeg)
