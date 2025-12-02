# Smart-Bridge – Intelligent Sensor-Based Monitoring System
# How to Run the Project
A real-time sensor-based system to monitor bridge safety, track water levels, detect vibrations, and alert authorities using IoT dashboards.
### 1. Arduino Code
- Open code/Smart_Bridge.ino in Arduino IDE
- Select board → Arduino Uno
- Upload to hardware or use Proteus with Virtual Serial

### 2. Proteus Simulation
- Load your .pdsprj file
- Connect sensors + Arduino
- Run simulation

### 3. Kibana Visualization
- Send serial data to Elasticsearch
- Open Kibana → Create index pattern
- Build bar/line graphs

  
# Features
- Real-time distance, vibration, and water-level monitoring
- Alerts via LED/Buzzer for unsafe levels
- Live dashboard using Kibana
- Proteus-based hardware simulation
- CSV-based data logging


# Tools & Technologies
- Arduino IDE
- Proteus Simulation
= Elasticsearch & Kibana
- Ultrasonic, Vibration, Water Sensors


# Future Enhancements
- Mobile app alerts
- ML-based predictive maintenance
- Multi-bridge integration
- Real IoT deployment using NodeMCU/ESP32


# Conclusion
This project provides a safe, efficient, and automated system for bridge monitoring using IoT, sensors, and data visualization.
