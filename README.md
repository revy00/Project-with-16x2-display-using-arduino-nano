# Project-with-16x2-display-using-arduino-nano



# Arduino 16×2 LCD Message Display

## Description

This project uses an **Arduino Nano** and a **16×2 LCD** to display custom messages and icons. It supports **custom characters** for emoji-style symbols and adjustable backlight for better visibility. Ideal for **interactive text displays** and small dashboards.

## Features

* Display text dynamically on 2 rows
* Create and show custom characters (emoji-style icons)
* Adjustable backlight using PWM
* Simple Arduino interface for easy customization

## Wiring

| LCD Pin  | Arduino Pin | Notes             |
| -------- | ----------- | ----------------- |
| VSS (1)  | GND         | Ground            |
| VDD (2)  | 5V          | Power             |
| V0  (3)  | GND / Pot   | Contrast control  |
| RS  (4)  | D7          | Register Select   |
| RW  (5)  | GND         | Always ground     |
| E   (6)  | D8          | Enable            |
| D4  (11) | D9          | Data 4            |
| D5  (12) | D10         | Data 5            |
| D6  (13) | D11         | Data 6            |
| D7  (14) | D12         | Data 7            |
| A   (15) | 5V via 220Ω | Backlight Anode   |
| K   (16) | GND         | Backlight Cathode |


## Hardware

* Arduino Nano
* 16×2 LCD (HD44780 compatible)
* Potentiometer (for contrast, optional)
* Jumper wires

## Usage

1. Connect the LCD and Arduino according to the wiring in your code.
2. Upload the Arduino sketch.
3. Observe messages and custom characters on the LCD.
4. Adjust backlight or contrast as needed.

## Notes

* Only 8 custom characters can be used at a time.
* Works with standard 16×2 LCD modules (no I2C required).


