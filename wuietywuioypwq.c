#include <mega128a.h>

unsigned char led = 0b10111111;

void main(void)
{
    DDRC = 0xFF;
    PORTC = led;
      
    EIMSK = 0b11000000;
    EICRB = 0b11100000; 
    
    SREG = 0x80;
    
    while(1);
}

interrupt [EXT_INT6] void LED_dbr(void)
{
    led = led << 1;
    led = led | 0b00000001;
    if(led == 0xFF) led = 0xFE;
    PORTC = led;
}

interrupt [EXT_INT7] void LED_clf(void)
{
    led = led >> 1;
    led = led | 0b10000000;
    if(led == 0xFF) led = 0b101111111;
    PORTC = led;
}