#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
#include "pin.h"
#define BIT_SET(a, b) ((a) |= (1ULL << (b)))
#define BIT_CLEAR(a,b) ((a) &= ~(1ULL<<(b)))
#define BIT_FLIP(a,b) ((a) ^= (1ULL<<(b)))
#define BIT_CHECK(a,b) (!!((a) & (1ULL<<(b)))) 

// https://wokwi.com/projects/382107318431068161

int main()
{
    Pin thePin(Pin::PORT::PINPORT_B,2);
    Pin thePin2(Pin::PORT::PINPORT_B,3);
    Pin thePin3(Pin::PORT::PINPORT_B,4);
    Pin thePin4(Pin::PORT::PINPORT_B,5);
    Pin thePin5(Pin::PORT::PINPORT_D,3);
    Pin theRGBR(Pin::PORT::PINPORT_D,0);
    Pin theRGBG(Pin::PORT::PINPORT_D,1);
    Pin theRGBB(Pin::PORT::PINPORT_D,2);

    // Simple LEDs
    while(1){
        thePin.on();
        _delay_ms(300);
        thePin.off();
        _delay_ms(100);
        // RGB-LED
        theRGBR.on();
        _delay_ms(500);
        theRGBR.off();
        _delay_ms(500);
         thePin2.on();
        _delay_ms(100);
         thePin2.off();
        _delay_ms(100);
         thePin3.on();
        _delay_ms(100);
        theRGBG.on();
        _delay_ms(500);
        thePin3.off();
        _delay_ms(100);
        thePin4.on();
        _delay_ms(100);
        theRGBG.off();
         _delay_ms(500);
         thePin4.off();
        _delay_ms(100);
        theRGBB.on();
        thePin5.on();
        _delay_ms(100);
        _delay_ms(500);
        theRGBB.off();
        _delay_ms(100);
        thePin5.off();
        _delay_ms(100);
    }
	return 0;
}