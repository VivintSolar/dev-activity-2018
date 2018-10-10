# Dev Activity for Oct. 12, 2018

## Before the Activity

* RSVP to the calendar invite.
* Join a team.  You can see teams [here](https://docs.google.com/spreadsheets/d/1cXlRaQoF88N5HqABuJNAMdux4Yy_58s0aDBy6h5h2sM/edit?usp=sharing).  
* Bring a jacket
* Bring your laptop with a charged battery
* **Bring what you need to connect a micro-USB device to your laptop** (e.g. USB-C to USB dongle and a micro-USB cable)
* Pre-install the needed driver (see below)

## At the Activity

We will start shortly after 11:30 with a quick welcome, an introduction to the project, the equipment we will be using, the workshops that will be available, and what you should expect to accomplish while you are there.  

After the introduction, lunch will be served, and you'll be able to settle in with your team and start playing with the equipment we will have available.

Throughout the afternoon, you will be free to tinker, attend various short workshops, ask questions, and mingle with each other.


## Hardware Information

We will be building projects with an Arduino compatible micro-controller, with a lot of other stuff you can tinker with to learn some basic skills.

The microcontroller board we will be using is the NodeMCU 1.0 (ESP 12E).  This is a specific implementation of the ESP8266 microcontroller.  It is a dev ready board, meaning it comes with a USB-Serial Converter, reset button, power supply/voltage regular - basically everything you need to just plug it in and start using it.  The USB-Serial Converter in our examples is a CP2102 chip, which requires the following driver in order to connect via USB:

[CP2102 Drivers](https://www.silabs.com/products/development-tools/software/usb-to-uart-bridge-vcp-drivers)

[This site offers a good overview of the ESP8266](https://tttapa.github.io/ESP8266/Chap01%20-%20ESP8266.html)

[And this is a good getting started guide for the NodeMCU specifically](http://www.electronicwings.com/nodemcu/basics)

There are various ways to write and load code onto an ESP8266.  I recommend starting with [ArduinoIDE](https://www.arduino.cc/en/Main/Software).

Once you have the IDE installed, [follow these instructions](http://www.electronicwings.com/nodemcu/getting-started-with-nodemcu-using-arduino-ide) to get set up to talk to your NodeMCU.


##Do not disturb timer project

Here is an example of the circuit we will be building for the do-not-disturb timer project:

![The timer circuit](/timer.png)

