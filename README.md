# RudderIndicator #

Constructing a rudder indicator for my sailing yacht.

# Hardware #
- Rudder angle transmitter on quadrant
- Controller/processing unit with adjustment (three pots: PS, midships, SB)
- LED-bar in helm.

# Software #
Microprocessor code
- Read signal from angle transmitter
- Compare with adjustment
- Output to LED-bar, 15 steps

# Hardware principle
- Voltage reference to produce a stable voltage for measurement. 5V, same to drive the microprocessor and LEDs
- Rotary potentiometer, with adjusters, for "copying" the rudder angle
    Max port: 1V
    Midships: 2,5V
    Max stbd: 4V
    V/step: 3 / 15 = 0,2V
- Read input via ADC (8-bit ADC = 5V/256 = 0,02 V resolution)
- Voltages to be fixed in software, adjusting via adjusting pots.
- LED-bar (with driver and serial-out shift register)
- Cabels and connectors:
  Transmitter-controller: 1,5m2 cable, 2 wires. Screw-on terminals in both ends.
  
  # Software principle
  - Read ADC value
  - Compare with set levels (1,0-2,5-4,0 V)
  - Output result to LED-bar
  - Error detection? Output to LEDbar, flashing:
    Err1 (output to LED1): Rudder position out of range (not within 0,8V - 4,7V)
    Err2: Serial communication error (to LED-bar)
    Err3: 
  - 
