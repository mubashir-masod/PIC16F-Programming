# LED Control with Push Button (PIC16F877A)

## 📌 Overview
This project demonstrates how to control an LED using a push button with the **PIC16F877A** microcontroller. Pressing the button turns the LED ON, and releasing the button turns it OFF.

## 🎯 Objective
- Learn how to configure GPIO pins.
- Read a digital input from a push button.
- Control an LED based on button state.
- Understand the basics of digital input and output.

## 🛠 Hardware Required
- PIC16F877A
- LED
- 220Ω Resistor
- Push Button
- 10kΩ Pull-up Resistor (if external pull-up is used)
- Breadboard
- Jumper Wires
- 5V Power Supply

## 💻 Software
- MPLAB X IDE
- XC8 Compiler
- Proteus (Simulation)

## 📂 Project Structure

```
LED_With_Button/
│
├── Code/
│   └── main.c
│
├── Simulation/
│   └── LED_With_Button.pdsprj
│
└── README.md
```

## 🔌 Pin Configuration

| Pin | Function |
|------|----------|
| RB0 | Push Button Input |
| RD0 | LED Output |

## ⚙ Working Principle

1. Configure **RB0** as an input.
2. Configure **RD0** as an output.
3. Continuously read the state of the push button.
4. If the button is pressed, turn the LED ON.
5. Otherwise, turn the LED OFF.

## ▶️ How to Run

1. Open the project in MPLAB X IDE.
2. Compile using XC8 Compiler.
3. Generate the HEX file.
4. Load the HEX file into the Proteus simulation.
5. Run the simulation and press the button to control the LED.

## 📖 Concepts Covered

- GPIO Configuration
- Digital Input
- Digital Output
- Polling Method
- Push Button Interfacing

## 🚀 Future Improvements

- Software Debouncing
- LED Toggle on Button Press
- Interrupt-Based Button Handling
- Long Press Detection

## 👨‍💻 Author

**Mubashir Masood**

GitHub: https://github.com/mubashir-masod