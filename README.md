# 🔥 IoT-Based Gas Alert System

An ESP32-based IoT gas monitoring and alert system designed
to detect abnormal gas/smoke sensor readings and provide
immediate local and remote alerts.

## 🚀 Features

- Real-time gas/smoke sensing
- ESP32-based processing
- Audible gas alert
- Visual warning indication
- Wi-Fi connectivity
- IoT monitoring
- Remote notification
- OLED/LCD status display
- Threshold-based detection

## 🛠️ Hardware

- ESP32 Development Board
- MQ-2 Gas Sensor
- Buzzer
- Red LED
- Green LED
- OLED/LCD Display
- Breadboard
- Jumper Wires
- Power Supply

## 💻 Software

- Arduino IDE
- Embedded C/C++
- Wi-Fi
- IoT Dashboard

## ⚙️ Working Principle

The MQ-2 sensor continuously monitors the surrounding
environment.

The ESP32 reads the sensor output and compares it with a
configured threshold.

When the sensor value exceeds the threshold, the system
activates the buzzer and warning LED.

The ESP32 can also transmit the alert through Wi-Fi to an
IoT dashboard or notification service.

## 🔄 System Flow

Gas/Smoke
   ↓
MQ-2 Sensor
   ↓
ESP32
   ↓
Threshold Comparison
   ↓
┌───────────────┬────────────────┐
│               │                │
Normal          Alert            IoT
│               │                │
Green LED       Buzzer ON        Notification
                Red LED ON

## 📊 Sensor Status

| Condition | System Response |
|---|---|
| Normal | Green LED ON |
| High reading | Red LED ON |
| High reading | Buzzer ON |
| High reading | IoT Alert |
| Wi-Fi connected | Dashboard updated |

## 📸 Project Images

### Complete Prototype

![Prototype](Images/prototype.jpg)

### MQ-2 Sensor

![MQ2 Sensor](Images/mq2_sensor.jpg)

### Circuit

![Circuit](Images/esp32_circuit.jpg)

### Gas Alert

![Gas Alert](Images/gas_alert.jpg)

### IoT Dashboard

![Dashboard](Images/dashboard.jpg)

## 🎯 Applications

- Home safety prototypes
- Kitchen monitoring
- Laboratory monitoring
- Industrial safety demonstrations
- Gas storage area monitoring
- Smart building prototypes

## 🔮 Future Improvements

- Multi-gas sensing
- Calibrated gas concentration measurement
- Mobile application
- Cloud data logging
- SMS notifications
- Email alerts
- Automatic ventilation control
- Multiple sensor nodes
- Battery backup
- Predictive safety analytics

## ⚠️ Safety Note

This project is intended as an educational prototype.

The MQ-2 sensor and hobby electronics used in this project
should not be considered a certified life-safety gas detection
system.

Real installations should use appropriately certified gas
detectors and professional safety systems.

## 👨‍💻 Author

G. Ashok

Electronics and Communication Engineering
