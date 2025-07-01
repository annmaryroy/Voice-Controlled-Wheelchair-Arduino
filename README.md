# 🎤 Voice-Controlled Wheelchair using Arduino
![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)

A smart assistive mobility solution that moves in response to voice commands via Bluetooth, integrating an ultrasonic sensor for obstacle detection.


## 📌 Project Summary

This project enables a wheelchair to respond to five basic voice commands (Forward, Backward, Left, Right, Stop) using a smartphone and Bluetooth module. It ensures safe motion by halting forward movement if an obstacle is detected within 20cm.


## 🛠️ Components and Technologies Used

- **Arduino Uno**
- **HC-05 Bluetooth Module**
- **HC-SR04 Ultrasonic Sensor**
- **L298N Motor Driver**
- **DC Motors & Wheels**
- **3.7V Li-ion Battery**
- **Breadboard & Jumper Wires**
  
- **Arduino Bluetooth Control App**
- **Embedded C / Arduino IDE**
 
---
  
## 🔧 Features

- 🔊 Voice-controlled motion
- 🧠 Obstacle detection using ultrasonic sensor
- ⚡️ Bluetooth-based wireless interface
- 💯 Field-tested accuracy: 94%
- 🚀 Emergency stop system for safety
---

## ⚙️ System Workflow

1. **Voice Input via Smartphone**  
   User speaks into the Android app. It converts voice to characters (`1` = Forward, `2` = Backward, etc.).

2. **Bluetooth Communication**  
   HC-05 receives the command and sends it to Arduino via serial port.

3. **Obstacle Detection**  
   The ultrasonic sensor checks for obstacles within 20 cm. Forward motion only happens if the path is clear.

4. **Motor Control**  
   Arduino interprets the command and drives the L298N motor driver accordingly.

---


## ✅ Achieved Results

- Voice command recognition accuracy: **94%**  
- Real-time control of wheelchair movement  
- Safe operation with obstacle detection using ultrasonic sensor  

---

## 🔭 Future Scope

- Voice control using local languages  
- Stair-climbing wheelchair system  
- Seat adjustment mechanism  
- Integration with home automation systems  
- Health monitoring features  

---

## 📚 References

- Humaira Salmin et al., “Design and Implementation of an Electric Wheel-Chair…” IJMSE, 2014  
- Nikunj Janak Gor, “Voice Controlled Motorized Wheelchair with Real-Time Location Monitoring”, ICECDS, 2017  
- Sumet Umchid, “Voice Controlled Automatic Wheelchair”, BMEiCON, 2018  
- Nirmal T M, “Wheelchair for Physically and Mentally Disabled Persons”, IJEER, 2014  

---



## 📂 File Structure

```
voice-controlled-wheelchair/
├── Arduino_Code/
│   └── voice_control.ino
├── report/
│   └── VOICE_CONTROLLED_WHEELCHAIR_report.pdf
├── media/
│   └── (block_diagram.png)
├── presentation/
│   └──  voice_controlled_final_ppt.pptx
├── README.md
```

## 🎥 Demo

🔗 [video demo link here – Google Drive or YouTube]

## 📚 Documentation

📄 Full Report: [VOICE_CONTROLLED_WHEELCHAIR_report.pdf](./report/VOICE_CONTROLLED_WHEELCHAIR_report.pdf)

## 🧠 Learnings

- Real-time embedded programming
- Wireless serial communication (Bluetooth)
- Integration of sensor data for safety
- Hands-on prototyping with Arduino

## 👩‍💻 Author

**Ann Mary Roy**  
📍 Kerala, India  
📧 annmaryroy365@gmail.com  
🔗 [LinkedIn](https://www.linkedin.com/in/annmaryroy)
