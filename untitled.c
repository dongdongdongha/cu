#include <mega128.h>

flash char seg[10] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f};
unsigned char n = 0;

void main() {
    DDRB = 0xF0;
    DDRD = 0xF0;
    DDRG = 0x0F;
                
    PORTG = 0x08;
    PORTD = 0xF0 & (seg[n] << 4);
    PORTB = 0xF0 & seg[n];
    
    EIMSK = 0b00010000;
    EICRB = 0b00000010; 
    
    SREG = 0x80;
    
    while(1);
}

interrupt [EXT_INT4] void LED_TEST(void)
{  
    n++;    
    
    if(n == 10) n = 0;
    
    PORTD = 0xF0 & (seg[n] << 4);
    PORTB = 0xF0 & seg[n];                     
    
}