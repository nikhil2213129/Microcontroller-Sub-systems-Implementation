# Analog-Input-and-Output-Sub-systems
Here is a `README.md` file based on the content of the provided document:

---

# Microcontroller Sub-systems Implementation

This project demonstrates the implementation of three sub-systems of a microcontroller: Analog Input, Analog Output, and Data Communication. The combined program reads input from a potentiometer, controls the brightness of an LED based on the input value, and prints the sensor and brightness values to the Serial Monitor.

## Table of Contents

- [Overview](#overview)
- [Sub-systems](#sub-systems)
  - [Analog Input](#analog-input)
  - [Analog Output](#analog-output)
  - [Data Communication](#data-communication)
- [Code Implementation](#code-implementation)
- [Getting Started](#getting-started)
- [Hardware Requirements](#hardware-requirements)
- [Software Requirements](#software-requirements)

## Overview

In this lab exercise, we developed a program that integrates three sub-systems of a microcontroller. The program reads the input from a potentiometer connected to the analog input pin A0 and controls the brightness of an LED connected to pin 9 based on the input value. Additionally, it prints the sensor and brightness values to the Serial Monitor.

## Sub-systems

### Analog Input

The Analog Input sub-system is implemented using the `analogRead()` function, a built-in function in the Arduino IDE. It reads the value from the analog input pin (connected to a potentiometer) and returns a 10-bit value ranging from 0 to 1023.

```cpp
sensorValue = analogRead(A0);
```

### Analog Output

The Analog Output sub-system controls the LED's brightness based on the potentiometer's input. It uses the `analogWrite()` function to set the brightness of the LED. The brightness value is an 8-bit value (0-255), calculated by dividing the sensor value by 4.

```cpp
analogWrite(9, brightness);
```

### Data Communication

The Data Communication sub-system uses the Serial library in the Arduino IDE to print the sensor and brightness values to the Serial Monitor. The `Serial.begin()` function initializes serial communication, and the `Serial.print()` functions print the values.

```cpp
Serial.begin(115200);
Serial.print("Sensor Value: ");
Serial.print(sensorValue);
Serial.print("\tLED Brightness: ");
Serial.println(brightness);
```

## Code Implementation

```cpp
const int ANALOG_IN_PIN = A0;
const int ANALOG_OUT_PIN = 9;
int sensorValue = 0;
int brightness = 0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  sensorValue = analogRead(ANALOG_IN_PIN);
  brightness = sensorValue / 4;
  analogWrite(ANALOG_OUT_PIN, brightness);
  
  Serial.print("Sensor Value: ");
  Serial.print(sensorValue);
  Serial.print("\tLED Brightness: ");
  Serial.println(brightness);
  
  delay(100);
}
```

## Getting Started

1. Connect the potentiometer to the analog input pin A0.
2. Connect the LED to the digital output pin 9.
3. Upload the provided code to your Arduino board.
4. Open the Serial Monitor to view the sensor and brightness values.

## Hardware Requirements

- Arduino board
- Potentiometer
- LED
- Resistors
- Breadboard and jumper wires

## Software Requirements

- Arduino IDE

---

This `README.md` file provides a detailed overview of the project, including descriptions of the sub-systems, code implementation, and setup instructions.
