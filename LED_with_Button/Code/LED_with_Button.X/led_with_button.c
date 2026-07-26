/*
 * File:   led_with_button.c
 * Author: MUBASHIR
 *
 */


#include <xc.h>
#include <stdint.h>
#define _XTAL_FREQ = 1000000

void main(void) 
{
    TRISB = 0x00;   // for LED
    TRISD = 0xFF;   // for BUTTON
    PORTB = 0x00;   // Initialize PORTB
    
    while (1)
    {
        if (PORTDbits.RD0 == 0)
        {
            PORTB = 0x01;
        }
        else
        {
            PORTB = 0x00;
        }
    }
}
