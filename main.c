#include <avr/io.h>
#include <avr/interrupt.h>

ISR(PCINT0_vect) {
 // Checks if button is pressed
 if (PINB & 0b00000001) {
    // Runs if button is NOT pressed (PIN8 is Normally HIGH)
    PORTB &= ~(1 << 5); // Turn OFF PIN13
    PORTB |= (1 << 1); // Turn ON PIN9
  } else {
    // Runs if Button is Pressed (PIN8 is GROUNDED)
    PORTB |= (1 << 5); // Turn ON PIN13
    PORTB &= ~(1 << 1); // Turn ON PIN9
  }
}

int main(void) {
  
  cli();
  PCICR |= (1 << 0); // Group 0 (PIN8 - PIN13)
  PCMSK0 |= (1 << 0); // Set PIN8 as the interrupt pin

  DDRB |= (1 << 5); // Set PIN13 as OUTPUT (Built-in LED)
  DDRB |= (1 << 1); // Set PIN9 as OUTPUT (External LED)

  // Normally HIGH switch
  PORTB |= (1 << 0); // Activate pullup resistor on PIN8
  sei(); // Activate global interrupts

  while (1) {
    // Looping code here...
  }
}
