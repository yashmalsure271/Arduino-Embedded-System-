# Circuit Documentation

## Built-in LED option
The Arduino Uno has a built-in LED connected to digital pin 13 (often marked `L`).
Upload the sketch and observe this LED. No external resistor or breadboard wiring
is needed for this built-in LED.

## External LED option
Connect the components in series:

`Arduino D13 -> 220 Ω resistor -> LED anode (+)`

`LED cathode (-) -> Arduino GND`

The resistor limits current through the LED. For an illustrative 5 V output and
approximately 2 V LED forward drop:

`I = (5 V - 2 V) / 220 Ω ≈ 13.6 mA`

Use the LED's and board's electrical ratings when selecting components.
