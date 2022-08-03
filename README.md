# AVR - Arduino Uno: Pin change interrupt
This is a code for a pin change interrupt using a single pin. The code is made complicated by adding a second output pin.
The first output pin is PIN13, this pin is connected to the Arduino-Uno's built-in LED which would then serve as the
first output. Second output pin is PIN9, an external LED is connected to this PIN which then would serve as the second
output.

For more information consult the ATMega328p datasheet page 56-57.

##  How to upload the code:
###     A. Through Arduino IDE
           1. Copy main.c content as text
           2. Paste it to an empty Arduino sketch
           3. Connect Arduino-Uno through USB
           4. Upload code through the button
    
       
### B. Command line
       1. Make sure you have AVR-GCC toolchain installed, this include GNU-Make and AVRDude.
       2. The only files you are going to need for this method are "main.c" and "Makefile"
       3. Simply open CMD or terminal with its directory set to the location in which you
          have both of those files in.
       4. Type "make" as a command without the quotes.
       5. Makefile automates the process.
