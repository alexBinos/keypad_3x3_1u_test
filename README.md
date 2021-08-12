# keypad_3x3_1u_test

Sharing progress on the 3x3 macro keypad...


## Assembly notes


1. RGB LEDs
   - Pin 1 is marked on the PCB in silkscreen, note that the odd pin on the LED package is GND (pin 3).
   - The LEDs are designed to be placed on the back side of the PCB, facing towards the front, through the cut out.
   - To assist PCB routing, **not all LEDs are oriented in the same direction**, pay close attention to the pin 1 markings on each LED footprint.
   - The cutouts for the bottom most LEDs (D13, D16, D19) was deliberately made 0.4mm wider than the others to test the PCB footprint. This footprint wont be used on future designs.

<br/>

2. Component orientations
   - The pin 1 marker on the KC2016K 16MHz crystal oscillator (X1) and the SRV05-4 TVS diode array (U3) were not placed.
   - With the USB connector facing up:
      - Pin 1 of X1 is the **top right** pad.
      - Pin 1 of U3 is the **top left** pad.

<br/>

3. Entering the bootloader
   - Through the ISP interface, disable the HWBE fuse and enable the BOOTRST fuse.
   - Flash the Caterina bootloader
   - See section 27 of the ATMEGA32U4 datasheet for more details.

<br/>

4. Non-critical hardware bugs
   - The series termination resistor for the RGB LEDs was not placed, the LEDS still work but this may affect their reliability.
   - Pads for the reset switch are slightly too small for the switch provided but you can still make it fit

<br/>

5. If you find any more issues or have feedback for the next revision let me know
