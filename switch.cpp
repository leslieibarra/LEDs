//----------------------------------------------------------------------//
// Programmer: Leslie Ibarra    
// Date: 02/03/2020
// Course: UArizona - ECE 372a
// Assignment: LAB 1
//----------------------------------------------------------------------//

#include <avr/io.h>


void initSwitch(){
  //Set switch 22 as pull-up enabled input
  DDRA &= ~(1 << DDA0);  //Data direction register set for input
  PORTA |= (1 << PORTA0);  //Pull-up resistor on PORTA0 inside microcontroller enabled
  
}
