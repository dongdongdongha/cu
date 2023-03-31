#include <mega128a.h>
#include <delay.h>

void main(void)
{
        int i;
        unsigned char led;
        DDRC = 0xFF;
while (1)
    {
        led = 0b01111111;
        for(i = 7; i >= 0; i--){
            PORTC = led;
            delay_ms(500);
            led >>= 1;   
            led = led + 0b10000000;
        }

    }
}
