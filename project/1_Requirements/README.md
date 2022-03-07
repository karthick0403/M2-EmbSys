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
