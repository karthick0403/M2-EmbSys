#  TITLE : IOT MESH ENABLED ENVIRONMENT MONITORING SYSTEM

TABLE OF CONTENT
_
|s.no|LIST OF FIGURES| 
|--|--|
|1.1| INTRODUCTION|
1.2 |LITERATURE REVIEW|	
|1.3| EXISTING SYSTEM|	
|1.4 |PROPOSED SYSTEM|
|1.5| OBJECTIVE|	
|1.6| ORGANISATION OF THE REPORT|
________________________________
## DIAGRAMATIC DESCRIPTION
_
|s.no|list|
|--|--|
|2.1| BLOCK DIAGRAM|

## HARDWARE DESCRIPTION
_
|s.no|list|
|--|--|
|3.1 |ARDUINO UNO|	
|3.2 |NODEMCU ESP8266|	
|3.3 |INTERNET OF THINGS|	
|3.4| MQ 135 AIR SENSOR	|
|3.5 |SEEED LOUDNESS SENSOR|	
|3.6 |BME280 HUMIDITY SENSOR|	
|3.7 |LIQUID CRYSTAL DISPLAY|
|3.8| THINKSPEAK PLATFORM|


## LIST OF FIGURES


|FIGURE NO|	TITLE|
|--|--|
|4.1	|MAIN BLOCK DIAGRAM|
|4.2	|ARDUINO UNO|	
|4.3	|NODEMCU ESP8266|	
|4.4	|MQ 135 AIR SENSOR|	
|4.5	|SEED LOUDNESS SENSOR|	
|4.6	|BME280 HUMIDITY SENSOR|	
|4.7	|LIQUID CRYSTAL DISPLAY|	
|4.8	|THINKSPEAK PLATFORM|	
|4.9	|SNAPSHOT OF HARDWARE|

## ABSTRACT

 Internet of Things (IoT) is expected to play a major role in our lives through pervasive systems of sensor networks encompassing our environment. These systems are designed
monitor vital physical phenomena generating data whichcan be transmitted and saved at cloud from where this information can be accessed through applications and further actions can be taken. Building IoTs has advanced significantly in the last couple of years since it has added a new dimension to the world of information and communication technologies. The development in wireless sensor networks can be used in monitoring and controlling various parameters in the weather station field. 
The sensor network hardware platforms are basically low-power embedded systems with some different sensors such as onboard sensors and analog  I/O  ports to connect sensors. Like hardware, software should also be developed, including OS, sensor/hardware drivers, networking protocols and application- specific sensing and processing algorithms. It presents a customised design of an Internet of Things (IoT) enabled environment monitoring system to monitor temperature, humidity, air quality and noise pollution. The proposed system uses MQ135 Air Sensor, Loudness Sensor and BME380 Humidity Sensor. The data obtained is processed and communicated via networking to cloud (ThinkSpeak) and it is stored in the cloud. From the system the implemented data can be accessed at any internet available locations in the world.

## INTRODUCTION

Environmental pollution has become a major problem in today’s world. Its increase is affecting our health badly, especially in urban and semi-urban areas where we are exposed to harmful gases emitted from automobiles and factories. In such a situation, a reliable device can be needed that can help us in analysing the changes caused by environmental pollution. The project represents the environmental and ambient parameter monitoring using low-power wireless sensors connected to the Internet, which send their measurements to a central server. The data from all over the world, stored on the base station, can be remotely visualized from every device connected to the Internet. IoT enables to be connected to virtually unlimited devices over the internet. It thus has a great potential of communicating and interacting with them. Internet of Things refers to the rapidly growing network of connected objects that are able to collect and exchange data using embedded sensors. It is nowadays finding profound use in each and every sector and plays a key role in the proposed environmental monitoring system too. The resulted solution provides the possibility of logging measurements from locations all over the world and of  visualizing  and analyzing the gathered data from any device connected to the Internet. It overcomes the problem of system integration and interoperability, providing a well-defined architecture that simplifies the transmission of data from sensors with  different  measurement  capabilities  and  increases   supervisory efficiency. This device that can effectively measure quality of air, noise pollution, temperature, humidity, pressure and send that data to the cloud. The data will be displayed on OLED display and ThinkSpeak cloud.

## LITERATURE REVIEW

 ## Environmental Monitoring Using Wireless Sensor Networks (WSN)

The paper aims at building a system which can be used on universally at any scale to monitor the parameters in each environment. Raspberry-pi and sensors collects all the real-time data from environment and this real-time data   is fetched by the web server and display it. User can access this data from anywhere through Internet. Raspberry Pi works as a base station which connects the number of distributed sensor nodes via zigbee protocol. Wireless Sensor Networks (WSN) has been employed to collect data about  physical  phenomenon in various applications such as habitat monitoring. In wireless sensor network system, the sensor node sense the data from the sensor and that data collects the end tags, end tags send its data to the router and router to coordinator and supply multi-clients services including data display, the whole data will be stored in base station and the stored data will send to the cloud (Ethernet) and the client can visit the base station remotely via (website) Ethernet.

## Iot Based Air Quality Monitoring System

This paper aims real time standalone air quality calculator parameters. The sensors are connected to ESP32 Node MCU and also a modem (internet) is interfaced with this. The information which is detected by these devices are unceasingly measured, calculated and communicated through Node MCU to the cloud platform over the internet. The sensors used are BME280 and SDS011 for calculator temperature, pressure, relative humidity and particulate matter (PM
2.5 AND PM10) respectively and MQ135 gas sensor for the measurement of Co2 both raw and calibrated values. Thing Speak cloud platform is used to view the results. Hardware implementation the model is designed using ESP32 Node MCU,  SDS011  –   Nova   dust  sensor,  BME280–   temperature,  humidity and

pressure sensor, MQ 135 – co2 sensor and OLED display. It is one of the simplest combinations of microcontroller and sensors to observe air characters. After the sensors sense the value, it is displayed on OLED screen as well as on Thing Speak platform using IoT.

## An IoT Based Real-Time Environmental Monitoring System

This paper presents the implementation and results of an environmental monitoring system which employs sensors for temperature and humidity of the surrounding area. This data can be used to trigger short term actions such as remotely controlling heating or cooling devices or long term statistics. The sensed data is uploaded to cloud storage and an Android application accesses   the cloud and presents the results to the end users. The system employs Arduino UNO board, DHT11 sensor, ESP8266 Wi-Fi module, which transmits data to openIoT API service ThingSpeak where it is analyzed and stored. An Android application is developed which accesses the cloud and displays results for end users via REST API Web service.

## Environmental Monitoring System using IoT

In this paper, an IoT-based atmospheric dust monitoring system, which is developed by a prototype with a small size, low cost and eco-friendly air environment measurement device connected by the LTE network, and the atmospheric environment analyzer. The development system has no restriction on installation location or installation space. The development system observes the atmospheric environment elements similarly, even though it is difficult to directly compare the observation results of the two systems due to the different locations in the measurement sites of the two systems. The development system can easily change measuring sensors, and compatible with various communication systems such as the WIFI communication network for the

transmission of the measurement results. An area that is being surveyed for estimating how much the area is affected by pollution. The constituents of air along with its proportion are calculated and if it is higher than normal then the officials are intimated about it.

## EXISTING SYSTEM

There are many existing works on evaluating and comparing physical  activity monitors. Some of them evaluated a set of monitors on their accuracy of step counts, and the others on their accuracy of energy expenditure. It consists  of a microcontroller as a main processing unit for the entire system and all the sensor and devices can be connected with the microcontroller. The sensors can be operated by the microcontroller to retrieve the data from them and it processes the analysis with the sensor data and updates it to the internet through Wi-Fi module connected to it. Most of the existing works evaluated accuracy by testing the monitor’s performance during pollution, and there were also a small part of these works can be improved by using IOT technology in proposed system.

## PROPOSED SYSTEM

In this proposed system, Arduino is the controller which is  the  regulatory part of the system. NodeMCU ESP8266 is the Wifi module.sThe sensors-MQ135 Air Sensor, BME280 Humidity sensor, Seeed Loudness Sensor are used to measure several atmospheric parameters. The sensor are connected to Node MCU ESP8266. MQ135 Air sensor is used to calculate the level of carbon dioxide and quality of air. BME280 Humidity is used to calculate the temperature, pressure and humidity level in atmosphere. Seeed Loudness sensor is used to measure the noise pollution. ThinkSpeak cloud platform is used to view the results. The value sensed by the sensor will be displayed in OLED display and ThinkSpeak Platform.


## OBJECTIVE

To facilitate favorable environment and pollution free future life by monitoring the air quality, noise pollution, temperature and humidity. The purpose or objective of environmental monitoring is different in different situations, but important aims to environmental monitoring to find risks to human and wildlife, scope to population migration from high density areas to low density areas and to restrict emission of gases.

## BLOCK DIAGRAM
![WhatsApp Image 2022-02-20 at 5 39 15 PM](https://user-images.githubusercontent.com/98890597/154841761-8d6f4f53-0d04-4fe2-b027-d6e259f6fd79.jpeg)

## HARDWARE DESCRIPTION

⦁	ARDUINO UNO

Arduino UNO is a microcontroller board based on the ATmega328P. It has 14 digital input/output pins (of which 6 can be used as PWM outputs), 6 analog inputs, a 16 MHz quartz crystal, a USB connection, a power jack, an ICSP header and a reset button. It contains everything needed to support the microcontroller; simply connect it to a computer with a USB cable or power it with a AC-to-DC adapter or battery to get started.

"Uno"  means   one   in   Italian  and  was   chosen  to   mark   the  release  of
ARDUINO Software (IDE)  1.0.  The Uno board and version 1.0 of  ARDUINO
Software  (IDE)  were  the  reference  versions  of  ARDUINO,  now  evolved to
newer releases. The Uno board is the first in a series of USB ARDUINO boards,

and the reference model
for the ARDUINO platform; for an
extensive list of

current, past or outdated boards see the ARDUINO index of boards.



## Arduino UNO

## NODEMCU ESP8266

NodeMCU is a low-cost open source IoT platform. It initially included firmware which runs on the ESP8266 Wi-Fi SoC from Espressif Systems, and hardware which was based on the ESP-12 module. NodeMCU is an open source firmware for which open source prototyping board designs are available. The name "NodeMCU" combines "node" and "MCU" (micro-controller unit). The term "NodeMCU" strictly speaking refers to the firmware rather than the associated development kits. Both the firmware and prototyping board designs are open source.The firmware uses the Lua scripting language. The firmware is based on the eLua project, and built on the Espressif Non-OS SDK for ESP8266. It uses many open source projects, such as lua-cjsonand SPIFFS.Due to resource constraints, users need to select the modules relevant for their  project and build a firmware tailored to their needs. Support for the 32-bit ESP32 has also been implemented.The prototyping hardware typically used is a circuit board functioning as a dual in-line package (DIP) which  integrates  a USB controller with a smaller surface-mounted board containing the MCU and antenna. The choice of the DIP format allows for easy prototyping on breadboards. The design was initially based on the ESP-12 module of the ESP8266, which is a Wi-Fi SoC integrated with a Tensilica Xtensa LX106 core, widely used in IoT application
![nodemcu-esp8266-wifi-iot-development-board-for-diy-electrobot-original-imafmktvdwuxbswp](https://user-images.githubusercontent.com/98890597/154842514-c05e57bc-76e7-47f7-b058-7708264d3293.jpeg)


## INTERNET OF THINGS

The Internet of things (IoT) refers to the billions of physical devices around the world that are now connected to the internet, all collecting and sharing data. Thanks to the arrival of super-cheap computer chips and the ubiquity of wireless networks, it's possible to turn anything, from something as small as a pill to something as big as an aeroplane, into a part of the IoT. Connecting up all these different objects and adding sensors to them adds a level of digital intelligence  to devices that would be otherwise dumb, enabling them to communicate real- time data without involving a human being. The Internet of Things  is making  the fabric of the world around us more smarter and more responsive, merging the digital and physical universes. It describes the network of physical objects—
a.k.a. "things"—that are embedded with sensors, software, and other technologies for the purpose of connecting and exchanging data with other devices and systems over the Internet. Things have evolved due to the convergence of multiple technologies, real-time analytics, machine learning, commodity sensors, and embedded systems. Traditional fields of embedded systems, wireless sensor networks, control systems,  automation  (including  home and building automation), and others all contribute to enabling  the  Internet of things. In the consumer market, IoT technology is most synonymous with products pertaining to the concept of the "smart home", including devices and appliances (such as lighting  fixtures, thermostats, home security systems  and cameras, and other home appliances) that support one or more common ecosystems, and can be controlled via devices associated with that ecosystem, such as smart phones and smart speakers. IoT can also be used in healthcare systems.

## MQ135 AIR SENSOR

MQ135 Gas Sensor is an air quality sensor for detecting a wide range of gases, including NH3, NOx, alcohol, benzene, smoke and CO2. Ideal for use in office or factory. MQ135 gas sensor has high sensitivity to Ammonia, Sulfide and Benzene steam, also sensitive to smoke and other harmful gases. It is with low cost & particularly suitable for Air quality monitoring application
It detects the attentiveness of gas in the air and an analog voltage is  an  output reading. The sensor can activate at temperatures ranging from -10 to 50° C with a power supply is less than 150 Ma to 5V. The sensing range is from
0.04 mg/L to 4 mg/L, which is suitable for breathalyzers. The MQ-135 gas sensor senses gases like ammonia nitrogen, oxygen, alcohols, aromatic compounds, sulfide, and smoke. The boost converter of the chip MQ-135 gas sensor is PT1301. The operating voltage of this gas sensor is from 2.5V to 5.0V. The MQ-135 gas sensor has a lower conductivity to clean the air as  a  gas sensing material. In the atmosphere, we can find polluting gases, but the conductivity of the gas sensor increases as the concentration of polluting gas increases. The air quality sensor is a signal output indicator instruction.  It has two outputs: analog output and TTL output. The TTL output is low signal light which can be accessed through the IO ports on the Microcontroller.

![mq-135-air-quality-hazardous-gas-sensor-module-500x500](https://user-images.githubusercontent.com/98890597/154842218-083ed3a3-7e44-4eca-a977-b22d95ac3107.jpg)


## SEEED LOUDNESS SENSOR

 A sound sensor is defined as a module that detects sound waves through its intensity and converting it to electrical signals. Loudness Sensor is designed to detect the loudness of environmental sound. Sound sensors work by mimicking the human body process that involves the ears and signal transmission to the brain. Microphones are sound sensors that convert a sound signal into a voltage or current proportional to the detected signal. They typically have a small diaphragm made of magnets surrounded by coiled metal wire. Sound waves cause the diaphragm to vibrate, which vibrates the magnets and induces a  current in the coil. Based on amplifier LM2904 and a built-in microphone, it amplifies and filters the high frequency signal that received from the microphone, and outputs a positive envelop. This will make  for  Arduino’s  signal acquisition. The output value depends on the level of sound input. In  order to avoid unnecessary signal disturbances, input signal will go through two times’ filtering inside the module. Lastly, there is a screw potentiometer that enables manual adjustments to the output gain.These sensors can detect sound pressure waves that are not within the audible range, which makes them suitable for a wide range of tasks. For instance, high-frequency ultrasonic sound sensors are used to weld plastics, whereas low-frequency ultrasound sensors are used to inspect less dense materials, such as wood, concrete and cement. Such sensors are not affected by reflectivity, translucence or color, as is the case with light sensors.
 ![Loudness Sensor_new](https://user-images.githubusercontent.com/98890597/154842265-8d867385-5223-48f3-8192-595f53333280.jpg)


## BME280 HUMIDITY SENSOR

BME280 is a digital pressure, humidity and temperature sensor.  This  module consists of extremely compact metal-lid LGA packages. Its low power consumption and small dimensions allow its implementation in battery-driven devices such as GPS, mobiles, and smart watches. It's working protocol is I2C and SPI, it is designed for both protocol, it has a separate pin out for I2C and SPI.BME280 is used in different industrial projects and electronic devices such as GPS, handsets, and watches. It provides high performance in all applications requiring humidity and pressure measurement. As it provides high performance in its applications like humidity and pressure measurement, due to this feature it used in emerging applications such as home automation, indoor navigation, health care, GPS and a low TCO. Its humidity sensing part provides a fast response time for fast context awareness applications and high accuracy over a wide temperature range. It pressure sensing part is absolute barometric pressure sensor having high accuracy, resolution and drastically lower noise than the Bosch Sensor BMP280. Its temperature sensing part has been optimized for lowest noise and high resolution. This sensor is available in both I2C and SPI interfaces and it can be supplied with 1.71 to 3.6 V for sensor supply Vdd and
1.2 to 3.6 V for the interface supply Vddio.

## LIQUID CRYSTAL DISPLAY

LCD (Liquid Crystal Display) is a type of flat panel display which uses liquid crystals in its primary form of operation. LEDs have a large and varying set of use cases for consumers and businesses, as they can be commonly found in smartphones, televisions, computer monitors and instrument panels. LCDs were a big leap in terms of the technology they replaced, which include light-emitting diode (LED) and gas-plasma displays. LCDs allowed displays to be much thinner than cathode ray tube (CRT) technology. LCDs consume much less power than LED and gas- display displays because they work on the principle of blocking  light  rather than emitting it. Where an LED emits light, the liquid crystals in an LCD produces an image using a backlight. A display is made up of  millions of pixels. The quality of a display commonly refers to the number of pixels; for example, a 4K display is made up of 3840 x2160 or 4096x2160 pixels. A pixel is made up of three sub pixels; a red, blue and green—commonly called RGB. With all the pixels on a display working together, the display can make millions of different colors. When  the pixels are rapidly switched on and off, a picture is created.

## THINKSPEAK PLATFORM

According to its developers, "ThingSpeak is an open-source Internet of Things (IoT) application and API to store and retrieve  data from things using  the HTTP and MQTT protocol over the Internet or via a Local Area Network. ThingSpeak enables the creation of sensor logging applications, location  tracking applications, and a social network of things with status updates". Storing data in the cloud provides easy access to your data. Using online analytical tools, you can explore and visualize data. You can discover relationships, patterns, and trends in data. You can calculate new data. And you can visualize it in plots, charts, and gauges. ThingSpeak provides access to MATLAB to help you make sense of data. We can:
⦁	Convert, combine, and calculate new data
⦁	Schedule calculations to run at certain times
⦁	Visually understand relationships in data using built-in plotting functions
⦁	Combine data from multiple channels to build a more sophisticated analysis
ThingSpeak provides tools that enable device communication for all of these actions and more. We can:
⦁	React to data—both raw data and new data that you calculate—as  it comes into a channel
⦁	Queue up commands for a device to execute


## ADVANTAGES

⦁	It has high sensitivity to smoke and harmful gases.
⦁	It has high stability and long life.
⦁	It is self sustained and consumes less power.
⦁	It enable us to accurately monitor environmental pollution.
⦁	Validation and verification of cleaning and sanitation programs.

## APPLICATIONS

⦁	To check contaminant heights in traffic tunnel and airing shaft to check effectiveness.
⦁	It can be placed in isolated places as well as self-sustained organization and the information can be measured and seen from anywhere.
⦁	It can also be used for the conservation of forests and other environmental areas.
⦁	Automatically judge clean level according to the requirement of GMP.
⦁	It provides weather data from different locations in areas covered by mobile network.
⦁	Weather information like temperature, humidity, rainfall, UV index and solar radiation s gathered simultaneously.


## CONCLUSION

Environmental monitoring results provide a basis for designing models that can be used to predict the future consequence of management actions. Monitoring results are also used to check and improves the model predictions time. Continued advances in the development, application, and automation of monitoring devices are needed to enhance the  accuracy and  cost-effectiveness of monitoring programs. It is critical to the protection of human health and the environment. Equally as important is the need to produce more scientists and engineers that have the knowledge and training required to successful develop and operate monitoring devices and manage monitoring devices.

## FUTURE SCOPE
The need of extensive research on deep learning, handling big data  and  noisy data issues, and a framework of robust classification approaches has been realized. The major challenges in implementation of smart sensors, AI  and WSN need to be addressed for sustainable growth through Smart Environment Monitoring. The participation of environmental organizations, regulatory bodies and general awareness would strengthen Environmental monitoring efforts. The poor quality of sensory data can be preprocessed using appropriate filters and signal processing methods to make the data more suitable for all subsequent tasks associated in Environmental Monitoring. The future scope of the work aims at studying other factors of environment such as disasters etc

## REFERENCES
⦁	Chaitra N, Bhavana S, Vilas Reddy D, Nikhil AS – “Iot Based  Air  Quality Monitoring System” - European Journal Of Molecular And Clinical Medicine - Volume 07, Issue: 08, 2020.
⦁	Aarti Jaladi, Karshima Khithani, Pankaja Pawar – “Environmental Monitoring Using Wireless Sensor Networks (WSN) based on IOT” - International Reasearch Journal Of Engineering And Technology - Volume:04, Issue: 01, Jan -2017

