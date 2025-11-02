# ⚡ Wavino Wiring Guide

This guide explains how to connect the Arduino Uno, the HC-SR04 ultrasonic sensor, and the SG90 servo motor for the Wavino project.

---

## 1. Circuit Diagram
You can find the complete wiring diagram at:  
../assets/images/wiring-diagram.png

---

## 2. HC-SR04 Sensor Connections
- Connect the VCC pin of the HC-SR04 to the 5V pin on the Arduino.  
- Connect the GND pin of the sensor to the Arduino’s GND.  
- Connect the Trig pin to Arduino digital pin D3.  
- Connect the Echo pin to Arduino digital pin D2.  

---

## 3. Servo Motor Connections
- Connect the servo’s red wire (VCC) to 5V on the Arduino.  
- Connect the servo’s brown wire (GND) to GND on the Arduino.  
- Connect the servo’s orange wire (Signal) to digital pin D9 on the Arduino.  

---

## 4. Breadboard Power Rails
- The red power rail (+) on the breadboard should connect to 5V from the Arduino.  
- The black or blue rail (-) should connect to GND from the Arduino.  
- Both the sensor and the servo receive power from these rails.  

---

## 5. Additional Tips
- Use short jumper wires for more stable readings.  
- If the servo jitters, place a 100µF capacitor between 5V and GND.  
- Always make sure all components share the same ground.  
- Avoid powering the servo directly from a USB port if it’s unstable — use an external 5V adapter when needed.
