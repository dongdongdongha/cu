#include <mega128.h>

unsigned char led = 0xFE;

void main(void)
{
    DDRC = 0xFF;
    PORTC = led;
    
    TCCR0 = 0x0F;
    TIMSK = 0x02;
    OCR0 = 155;
    SREG = 0x80;
    
    while(1);
}

interrupt [TIM0_COMP] void timer_comp0(void)
{
    led = led << 1| 0x01;
    if(led == 0xFF) led = 0xFE;
    PORTC = led;
}
