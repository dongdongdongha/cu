#include <mega128a.h>

unsigned char led = 0xFE;

void main(void)
{
    DDRC = 0xFF;
    PORTC = led;
      
    EIMSK = 0b00010000;
    EICRB = 0b00000010;
    
    SREG = 0x80;
    
    while(1);
}

interrupt [EXT_INT4] void LED_TEST(void)
{
    led = led << 1;
    led = led | 0b00000001;
    if(led == 0xFF) led = 0xFE;
    PORTC = led;
}