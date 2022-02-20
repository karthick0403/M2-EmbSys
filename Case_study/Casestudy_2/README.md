# TITLE:SMART PARKING SYSTEM

# ABSTRACT
         In recent times the concepts of smart cities have become very popular. Thanks to the Internet of things the idea of smart city now seems to be completed. Consistent efforts are being made in the field of IoT in order to maximize the productivity and reliability of urban infrastructure. Problems such as, traffic congestion, limited car parking facilities and road safety are being addressed by IoT. In this paper, we present an IoT based cloud integrated smart parking system. The proposed Smart Parking system consists of an on-site deployment of an IoT module that is used to monitor and signalize the state of availability of each single parking space. A mobile application is also provided that allows an end user to check the availability of parking space and book a parking slot accordingly.

# INTRODUCTION
        The concept of Internet of Things (IoT) started with things with identity communication devices. The devices could be tracked, controlled or monitored using remote computers connected through Internet. IoT extends the use of Internet providing the communication, and thus inter-network of the devices and physical objects, or ‘Things’. The scalable and robust nature of Cloud computing is allowing developers to create and host their applications on it. Cloud acts as a perfect partner for IoT as it acts as a platform where all the sensor data can be stored and accessed from remote locations. These factors gave rise to the amalgamation of both technologies thus leading to the formation of a new technology called Cloud of Things (CoT). In CoT the things (nodes) could be accessed, monitored and controlled from any remote location through the cloud. Due to high scalability in cloud any number of node could be added or Removed from the IoT system on a real time basis. 
In simple terms IoT can be explained in form of an equation stating: Physical Object + Controller, Sensor and Actuators + Internet = Internet of Things
  
Recent advances in creating low-cost, low-power embedded systems are helping developers to build new applications for Internet of Things. Followed by the developments in sensor technology, many modern cities have opted for deploying various IoT based systems in and around the cities for the purpose of monitoring. A recent survey performed by the International Parking Institute reflects an increase in number of innovative ideas related to parking systems. At present there are certain parking systems that claim to citizens of delivering real time information about, available parking spaces. Such systems require efficient sensors to be deployed in the parking areas for monitoring the occupancy as well as quick data processing units in order to gain practical insights from data collected over various sources.

## PROBLEM STATEMENT 
       Parking management influences drivers search time and cost for parking spaces. It may also cause traffic congestion.  Finding a parking space in most metropolitan areas, especially during the rush hours, is difficult for drivers. Difficulty arises from not knowing where the available spaces may be at that time traffic congestion may occur.



## SOLUTION
       Parking space reservation can help drivers to reduce the search time dramatically. With the real-time reservation service, the drivers can find and reserve their desired vacant parking spaces quickly. Therefore, the gasoline and time in search of vacant parking space is reduced.  It reduces time in search of vacant parking spaces is reduced so it reduces traffic congestion caused due that.

## REQUIREMENT
 
⦁	Power Supply - Power supply gives 5v supply to the PIC microcontroller and other block also work on 5v DC.  
⦁	IR Sensor - The IR sensor used to detect the car in parking. If car is present then it shows on cloud as that parking slot is allowed if not allowed then it will shows that parking slot empty. 
⦁	Reservation - if you booked parking then from booking time then it will be booked for next 5 minutes and countdown start at timer. 
⦁	Buzzer - If any other person parked their car in booked slot then alarm will get buzzed periodically for some time as per set.
⦁	LED - On LED we will show the indication of booked slot. 
⦁	LCD - LCD part is used in security area for check out the parking is allotted or free.


## BLOCK DIAGRAM
![WhatsApp Image 2022-02-20 at 4 13 01 PM](https://user-images.githubusercontent.com/98890597/154843854-2688a1a7-26f0-4e27-bdcc-48034755e31b.jpeg)


## USECASE DIAGRAM
![Untitled Workspace](https://user-images.githubusercontent.com/98890597/154843940-61c83836-47c6-4371-9906-385fc1f72c34.png)

## WORKING PRINCIPLE
## ALGORITHM:
       ⦁	Start. 
       ⦁	Turn on the power supply. 
       ⦁	 IR sensor will get activated. 
       ⦁	Search online for empty parking slot from android application. 
       ⦁	Space detection will start. 
       ⦁	If space is detected data sends and stored on cloud by sending system status by GSM. 
       ⦁	LED will start showing the number of parking slots. 
       ⦁	Display on front LCD that the slot is booked. 
       .	Else go to step 5. 
       ⦁	Shows space on cloud. 
       ⦁	We can now book empty parking slot online. 
       ⦁	LED indication will get off. 
       ⦁	IR sensor will open a gate. 
       ⦁	End.

 
## ADVANTAGES OF SMART PARKING SYSTEM
## ⦁	Efficiency - 
           #The parking management system doesn’t rely on a man to do the job; instead, it deals with software and smartphones, which are less likely to make mistakes. 
           #Faster processes -
           #Handle your parking protocols yourself and be the determinant of when you enter the building without delay. One of the advantages of a parking management system is that you can do this very quickly. 
          # Provides information -
For the modern parking management system, which makes use of software, you can ask various questions through your phone. Questions on spaces, occupancy, overstay, or illegal parking? They can all be answered from wherever you are.
         #Reports -
          The modern software-oriented type of parking management system also involves reporting. Not only does it make things easier for users, but managers also enjoy a fair share of having workload reduced for them when it comes to monitoring and managing parking spaces. They receive reports on the vehicles in the building, as well as the time of access. 
       #	The need for paper and pencil way of recording is no longer necessary, and things are automated. There’s even the option of one-on-one counting of vehicles.
       #	Increased Service -
A company with a parking management system can serve its customers, clients, and workers better. This is because they can reduce the magnitude of stress that comes into parking.
      #	Security -
One of the significant advantages of a parking management system is that it provides security. There is a barrier and reservation feature that controls the vehicles which have access to a place. This way, it can lock out some at certain times, if programmed to do so. 
      #	There’s also a surveillance camera (CCTV) which monitors vehicles and can even be used for reference, in the case that there’s a need.
      #	Map information -
Other than general information or question and answer, the software is also able to provide information that will help with locating places. It has map support for people who may be new in the area or people who are yet to get familiar with things.
     #Decrease in Cost -
Installing the parking management system incurs a one-time cost. But when you have to deal with other systems, there is the need to pay or fund regularly. An organization that opts for this system is one that is sure to have its costs reduced, compared to others.   



## DISADVANTAGES OF SMART PARKING SYSTEM

     #	The high cost of construction or installation -
The cost of having a sound, working parking management system is usually high. This is because of the various components that go into making the system work. Components such as the statistical feature, automated ticketing, and statistical reports, and many others make it all expensive. Some organizations may not be able to afford such. 
    #	Regular maintenance -
   		The system is automated; however, it still requires several regular maintenances from the company. This is to ensure that the system is working perfectly and that nothing has gone wrong. The maintenance could be once in months. 
    # Operation -
   		A lot of people are not used to the parking management system. As a result, it may be difficult for them to make use of, thereby causing further complications during parking.
    #	Breakdown -
    		As a machine, the system could inevitably breakdown at some point. When this occurs, vehicles may not be able to have access to buildings, and cars parked inside might not be able to move. In another way, it could malfunction and lead cars to park in the wrong places. 
       Uncertainty in the building structure –
Dealing with this is quite easy as the building’s blueprint may be used, or the manager could decide to map out the necessary parts of the building, which deals with the parking area.   

## CONCLUSION
       The concept of Smart Cities has always been a dream for humanity. Since the past couple of years large advancements have been made in making smart cities a reality. The growth of Internet of Things and Cloud technologies has given rise to new possibilities in terms of smart cities. Smart parking facilities and traffic management systems have always been at the core of constructing smart cities. The system that we propose provides real time information regarding availability of parking slots in a parking area. Users from remote locations could book a parking slot for them by the use of our mobile application. The efforts made in this paper are indented to improve the parking facilities of a city and thereby aiming to enhance the quality of life of its people.



   ## REFERENCES
[1] 2015- An approach to IOT based car parking and reservation system on cloud _Vaibhav Hans, Parminder Singh Sethi, Jatin Kinra. 
[2] 2016- Novel vehicle booking system using IOT_S. Vidhya Sagar; B. Balakiruthiga; A. Sivanesh Kumar
