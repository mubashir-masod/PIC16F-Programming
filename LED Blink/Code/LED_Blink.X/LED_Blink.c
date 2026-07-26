/*
 * File:   LED_Blink.c
 * Author: Mubashir
 *
 */

#include <xc.h>
#define _XTAL_FREQ 1000000   //1MHZ Crystal

void main(void) 
{
    TRISB = 0x00;   //for LED
    PORTB = 0x00;   //Initialize PORTB
    
    while (1)
    {
        PORTB = 0x01;       // Turn ON LED
        __delay_ms (1000);   // Wait 0.5 Sec
        PORTB = 0x00;       // Turn OFF LED
        __delay_ms (1000);   // Wait 0.5 Sec
    }
}
