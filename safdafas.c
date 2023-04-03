#include <delay.h>
#include <mega128a.h>

void main(void)
{
while (1)
    {
    DDRB = 0xF0;
    DDRD = 0xF0;
    DDRG = 0x0F;
    
    
        PORTG = 0b00001000;
        PORTD = 0b01100000;      
        PORTB = 0b01100000;
        delay_ms(5);
        
        PORTG = 0b00000100;
        PORTD = 0b01000000;
        PORTB = 0b11110000;
        delay_ms(5);
        
        PORTG = 0b00000010;
        PORTD = 0b01010000;
        PORTB = 0b10110000;
        delay_ms(5);
        
        PORTG = 0b00000001;
        PORTD = 0b00000000;
        PORTB = 0b01100000;
        delay_ms(5);    
    
    }
}
