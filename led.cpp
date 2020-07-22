//----------------------------------------------------------------------//
// Programmer: Leslie Ibarra    
// Date: 02/03/2020
// Course: UArizona - ECE 372a
// Assignment: LAB 1
//----------------------------------------------------------------------//


#include <avr/io.h>
#include "led.h"

void initLED()  {
      //Initialize physical pins on the development board to outputs
      //DDRBBXn sets pin direction as output
      DDRB |=  (1 << DDB2);
      DDRL |= (1 << DDL0) | (1 << DDL2) | (1 << DDL4) | (1 << DDL6);
      DDRG |= (1 << DDG0) | (1 << DDG2);
      DDRC |= (1 << DDC0);

}//END initLED()

void turnOnLED(unsigned int LEDNUM){

      switch(LEDNUM) {

            case 1:
            PORTB |= (1 << PORTB2);  //Turn ON LED at header pin 51
            PORTC |= (1 << PORTC0); //Turn ON LED at header pin 37
            break;

            case 2:
            PORTL |= (1 << PORTL0); //Turn ON LED at header pin 49
            PORTG |= (1 << PORTG2); //Turn ON LED at header pin 39
            break;

            case 3:
            PORTL |= (1 << PORTL2); //Turn ON LED at header pin 47
            PORTG |= (1 << PORTG0); //Turn ON LED at header pin 41
            break;

            case 4:
            PORTL |= (1 << PORTL4); //Turn ON LED at header pin 45
            PORTL |= (1 << PORTL6); //Turn ON LED at header pin 43
            break;

            case 5:
            PORTL |= (1 << PORTL2); //Turn ON LED t header pin 47
            PORTG |= (1 << PORTG0); //Turn ON LED at header pin 41
            break;

            case 6:
            PORTL |= (1 << PORTL0); //Turn ON LED at header pin 49
            PORTG |= (1 << PORTG2); //Turn ON LED at header pin 39
            break;

            case 7:
            PORTB |= (1 << PORTB2); //Turn ON LED at header pin 51
            PORTC |= (1 << PORTC0); //Turn ON LED at header pin 37
            break;
      }
      
}// END turnOnLED()

void turnOffLED(unsigned int LEDNUM){
      switch(LEDNUM) {
            case 1:
            PORTB &= ~(1 << PORTB2); //Turn OFF LED at header pin 51
            PORTC &= ~(1 << PORTC0); //Turn OFF LED at header pin 37
            break;

            case 2:
            PORTL &= ~(1 << PORTL0); //Turn OFF LED at header pin 49
            PORTG &= ~(1 << PORTG2); //Turn OFF LED at header pin 39
            break;

            case 3:
            PORTL &= ~(1 << PORTL2); //Turn OFF LED at header pin 47
            PORTG &= ~(1 << PORTG0); //Turn OFF LED at header pin 41
            break;

            case 4:
            PORTL &= ~(1 << PORTL4); //Turn OFF LED at header pin 45
            PORTL &= ~(1 << PORTL6); //Turn OFF LED at header pin 43
            break;

            case 5:
            PORTL &= ~(1 << PORTL2); //Turn OFF LED at header pin 47
            PORTG &= ~(1 << PORTG0); //Turn OFF LED at header pin 41
            break;

            case 6:
            PORTL &= ~(1 << PORTL0); //Turn OFF LED at header pin 49
            PORTG &= ~(1 << PORTG2); //Turn OFF LED at header pin 39
            break;

            case 7:
            PORTB &= ~(1 << PORTB2); //Turn OFF LED at header pin 51
            PORTC &= ~(1 << PORTC0); //Turn OFF LED at header pin 37
            break;
      }
}//END turnOffLED()

void testLED(unsigned int LEDNUM){

      turnOnLED(LEDNUM); //Turn ON assigned LED
      if (LEDNUM == 1) //Check for special case LED at the beginning
      {
            turnOffLED(6); //Special case Turn OFF LED at the end;
      }
      else
      {
            turnOffLED(LEDNUM -1); //Turn OFF LED previously turned on;
      }
}
