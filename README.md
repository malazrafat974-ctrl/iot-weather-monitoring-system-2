# IoT Weather Monitoring System

## Project Description

The **IoT Weather Monitoring System** is an Arduino-based project designed to monitor environmental conditions in real time.

The system uses a **DHT11 sensor** to measure temperature and humidity and an **LDR sensor** to measure light intensity. The collected data is processed by an **Arduino Uno** and displayed on a **16×2 LCD**. The readings can also be monitored through the Arduino Serial Monitor.

This project demonstrates the basic concepts of **IoT, sensor data collection, microcontroller programming, and real-time data display**.

## Features

* Measures temperature using a DHT11 sensor.
* Measures humidity using a DHT11 sensor.
* Measures light intensity using an LDR sensor.
* Displays sensor readings on a 16×2 LCD.
* Uses a 10kΩ potentiometer to adjust the LCD contrast.
* Displays sensor data through the Serial Monitor.
* Updates environmental readings continuously.
* Uses simple and low-cost hardware.

## Hardware Requirements

* Arduino Uno
* DHT11 Temperature and Humidity Sensor
* LDR (Light Dependent Resistor)
* 16×2 LCD Display
* 10kΩ Resistor
* 10kΩ Potentiometer
* Breadboard
* Jumper Wires
* USB Cable

## Software Requirements

* Arduino IDE
* DHT sensor library
* Adafruit Unified Sensor library
* LiquidCrystal library

## Installation

### 1. Clone the Repository

```bash
git clone https://github.com/malazrafat974-ctrl/iot-weather-monitoring-system-2)
```

### 2. Open the Project

Open the project folder and locate the Arduino source file:

```text
iot-weather-monitoring-system/
└── weather_monitor.ino
```

Open `weather_monitor.ino` using the **Arduino IDE**.

### 3. Install the Required Libraries

In Arduino IDE, go to:

**Sketch → Include Library → Manage Libraries**

Search for and install:

* **DHT sensor library**
* **Adafruit Unified Sensor**

The **LiquidCrystal** library is included with the Arduino IDE.

### 4. Connect the Hardware

Connect the components to the Arduino Uno according to the following configuration.

#### DHT11

| DHT11 | Arduino Uno |
| ----- | ----------- |
| VCC   | 5V          |
| DATA  | D2          |
| GND   | GND         |

#### LDR

| LDR           | Arduino Uno |
| ------------- | ----------- |
| Sensor Output | A0          |
| VCC           | 5V          |
| GND           | GND         |

The LDR is connected with a **10kΩ resistor** to form a voltage divider.

#### LCD 16×2 and Potentiometer

The **10kΩ potentiometer** is used to adjust the contrast of the LCD display.

| LCD / Potentiometer | Arduino Uno              |
| ------------------- | ------------------------ |
| LCD VSS             | GND                      |
| LCD VDD             | 5V                       |
| LCD V0              | Potentiometer middle pin |
| LCD RS              | D7                       |
| LCD RW              | GND                      |
| LCD E               | D6                       |
| LCD D4              | D5                       |
| LCD D5              | D4                       |
| LCD D6              | D3                       |
| LCD D7              | D8                       |
| LCD A               | 5V through a resistor    |
| LCD K               | GND                      |
| Potentiometer Pin 1 | 5V                       |
| Potentiometer Pin 2 | LCD V0                   |
| Potentiometer Pin 3 | GND                      |

Turn the potentiometer to adjust the LCD contrast until the text is clearly visible.

### Hardware Setup

![IoT Weather Monitoring System Hardware](https://github.com/user-attachments/assets/dcc9e273-fafe-4807-8396-708e397aeeae)

### 5. Upload the Code

1. Connect the Arduino Uno to the computer.
2. Open `weather_monitor.ino`.
3. Select **Arduino Uno** from **Tools → Board → Arduino Uno**.
4. Select the correct COM port.
5. Click **Upload**.

### Arduino IDE

![Arduino IDE](https://github.com/user-attachments/assets/6eee96aa-0979-4241-98a0-77d57a3a7e1f)

![Arduino Code](https://github.com/user-attachments/assets/3b064d56-d290-4983-8e20-5598f51d2dbb)

![Arduino Serial Monitor](https://github.com/user-attachments/assets/24e25c59-c242-4a09-9d92-5dfbf0fbf96f)

## Usage

After uploading the program:

1. Power the Arduino Uno.
2. The LCD displays the system startup message.
3. The system reads temperature, humidity, and light intensity.
4. Temperature and humidity are displayed on the LCD.
5. The light intensity reading is displayed after a few seconds.
6. The same sensor readings are printed on the Serial Monitor.
7. Open the Serial Monitor and set the baud rate to **9600**.

### Example LCD Output

```text
Temp: 27.0°C
Humidity: 52%
```

After a few seconds:

```text
Light:
680
```

### Example Serial Monitor Output

```text
IoT Weather Monitoring System
-----------------------------
Temperature: 27 C
Humidity: 52 %
Light Intensity: 680
-----------------------------
```

The readings are continuously updated according to the surrounding environmental conditions.

## Project Structure

```text
iot-weather-monitoring-system/
│
├── weather_monitor.ino
├── README.md
└── LICENSE
```

## Contributors

**Malaz** — Project development, Arduino programming, hardware integration, testing, and documentation.

## License

This project is developed for educational purposes and is available under the MIT License.
