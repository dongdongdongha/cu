#include <mega128.h>

unsigned char led = 0x0;
unsigned char cnt = 0;

void main(void)
{
    DDRC = 0xFF;
    PORTC = led;
    
    TCCR0 = 0x06;
    TIMSK = 0x01;
    TCNT0 = 6;
    SREG = 0x80;
    
    while(1);
}

interrupt [TIM0_OVF] void timer_int000(void)
{
    cnt++;
    if (cnt == 250)   {
        led = ~led;
        PORTC = led;
        cnt = 0;  
    }
}
