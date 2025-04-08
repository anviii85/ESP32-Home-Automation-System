# ESP32 Home Automation System

## Overview
This project enables the control of **LED lights** via a **mobile app** using an **ESP32** microcontroller and **Bluetooth** communication. The app allows users to toggle two LEDs on/off from a mobile device, demonstrating basic **home automation** control using local communication.

## Components
- **ESP32 Microcontroller**: The brain of the system, handling communication with the mobile app and controlling the LEDs.
- **2 LEDs**: Connected to GPIO pins on the ESP32 for visual feedback.
- **MIT App Inventor**: Used to build a custom Android app for local control.
- **Bluetooth**: Communication between the app and the ESP32 for toggling LEDs.

## Features
- Control two LEDs using a mobile app.
- Local control via Bluetooth (no internet/cloud required).
- On/Off functionality for each LED.
- Simple app interface with toggle buttons for LED control.

## Circuit Diagram
The circuit uses the following connections:
- **LED1** connected to **GPIO5**
- **LED2** connected to **GPIO18**

## App Overview
- The **MIT App Inventor** app sends commands over Bluetooth to the ESP32.
- Buttons in the app allow users to toggle LED1 and LED2 on/off.

## Installation and Setup
### ESP32 Firmware:
1. Flash the provided firmware onto the **ESP32** using the Arduino IDE.
2. The ESP32 will await Bluetooth commands to control the LEDs.

### MIT App Inventor:
1. Import the `SmartHomeApp.aia` project into MIT App Inventor.
2. Customize the app as needed (optional).
3. Install the app on your Android device.

## How It Works
- The mobile app sends a command (e.g., `"on1"`, `"off1"`) via Bluetooth to the ESP32.
- The ESP32 receives the command and toggles the respective LED.

## Files
- **`esp32_code.ino`**: Arduino code for the ESP32 to control LEDs via Bluetooth.
- **`SmartHomeApp.aia`**: MIT App Inventor project file for the mobile app.
- **`ui_screenshot.png`**: Screenshot of the app UI.

## License
This project is open-source and available for anyone to use or modify. Feel free to explore and customize it for your own smart home needs!

## Contact
For more information, feel free to reach out via [GitHub Issues](https://github.com/[YourUsername]/ESP32-Home-Automation-System/issues).


