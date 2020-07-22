//----------------------------------------------------------------------//
// Programmer: Leslie Ibarra    
// Date: 02/03/2020
// Course: UArizona - ECE 372a
// Assignment: LAB 1
//----------------------------------------------------------------------//

#include <avr/io.h>
#include <util/delay.h>
#include "led.h"
#include "switch.h"
#define SHORT_DELAY 250   //Set short delay
#define LONG_DELAY 700    //Set long delay

int main(){

  initLED();    //Initialize LEDs
  initSwitch(); //Initialize switch

  unsigned int LEDNUM = 1;    //Set counter to 1 

  while(1){
    if((PINA & (1 << PINA0))){    //If switch is pressed: SHORT_DELAY
     
      
      testLED(LEDNUM);          //Start the LED sequence 
      _delay_ms(SHORT_DELAY);   //Delay function built into add on library
      
    }
    else{                       //If switch is not pressed: LONG_DELAY
      testLED(LEDNUM);          //Start the LED sequence 
      _delay_ms(LONG_DELAY);    //->Delay function built into add-on library

    }
    
    if (LEDNUM == 6){  //Check if at end of LED light string

      LEDNUM = 1;      //Set LED light string back to beginning
    }

    else {
      LEDNUM ++;       //Otherwise increment LED light
    }
  }

  return 0;
}//END main()
