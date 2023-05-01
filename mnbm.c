#include <mega128a.h>

void main(void)
{
    unsigned char sw1;
    
    DDRE = 0x0;
    DDRC = 0xFF;
    
    PORTC = 0xFF;
    
    while(1){
        sw1 = PINE & 0b10000000;         
        
        if(sw1 != 0) PORTC = 0xFF;
        else PORTC = 0x00;
    }
}
