# Arduino LED Blink QA System

A beginner-friendly Arduino Uno LED blinking project documented with a GitHub-based
quality-assurance workflow. The LED changes state every second. The implementation
uses `millis()` rather than `delay()` so the main loop remains available for other work.

## Hardware
- Arduino Uno
- Built-in LED on digital pin 13 (or external LED)
- If using an external LED: 220 Ω series resistor
- Breadboard and jumper wires (for an external LED)

## Wiring
For the built-in LED, no external wiring is required; use the board's `L` LED.
For an external LED: D13 -> 220 Ω resistor -> LED anode (+); LED cathode (-) -> GND.

## Software
- Arduino IDE
- Arduino C/C++
- Git and GitHub

## Run
1. Open `src/led_blink/led_blink.ino` in Arduino IDE.
2. Select **Arduino Uno** and the correct serial port.
3. Upload the sketch.
4. Open Serial Monitor at **9600 baud**.
5. Observe the LED and alternating `LED ON` / `LED OFF` messages.

## Quality checks
See [`src/led_blink/docs/test_report.md`](src/led_blink/docs/test_report.md)
and [`src/led_blink/docs/circuit.md`](src/led_blink/docs/circuit.md).

## Suggested GitHub QA workflow
Create an issue for each identified problem, fix it on a separate branch, open a
pull request, review the change, merge it, and close the linked issue. Do not mark
issues or pull requests as completed until you have actually performed those steps.

## Student
Yash Malsure | PRN: 202301070125 | Division B
B.Tech Electronics and Telecommunication
MIT Academy of Engineering, Alandi (D), Pune
