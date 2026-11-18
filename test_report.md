# Test Report — Arduino LED Blink QA System

## Test setup
- Board: Arduino Uno
- Sketch: `led_blink.ino`
- LED: Built-in pin-13 LED (or external LED wired as documented)
- Serial Monitor: 9600 baud

## Test cases

| ID | Test | Expected result | Result to record |
|---|---|---|---|
| T1 | Power/reset the board | Sketch starts; LED begins toggling | Fill after testing |
| T2 | Observe LED for 10 seconds | LED alternates ON and OFF at roughly 1-second intervals | Fill after testing |
| T3 | Open Serial Monitor at 9600 baud | `LED ON` and `LED OFF` messages alternate | Fill after testing |
| T4 | Inspect source for timing | `millis()` is used; no `delay()` call is required | Source inspection |
| T5 | Inspect external LED wiring, if used | 220 Ω resistor is in series with LED | Fill after inspection |

## Test status
This file is a test plan/template. Enter the actual observed result and date after
running each test on physical hardware. Do not report a test as passed unless it
has been performed.
