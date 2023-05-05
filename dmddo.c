#include <delay.h>
#include <mega128a.h>

void main(void)
{
while (1)
    {
    DDRB = 0xF0;
    DDRD = 0xF0;
    DDRG = 0x0F;
    
    PORTB = 0b01100000;
    PORTD = 0b11110000;
    
    while(1){
        PORTG = 0b00001000;
        delay_ms(500);  
        
        PORTG = 0b00000100;
        delay_ms(500);  
        
        PORTG = 0b00000010;
        delay_ms(500);  
        
        PORTG = 0b00000001;
        delay_ms(500);    
        }
    }
}
