#include <mega128a.h>

void main(void)
{
    unsigned char osw, nsw;
    unsigned char led = 0xFE;
    
    DDRE = 0x0;
    DDRC = 0xFF;
    
    PORTC = 0xFF;     
    
    osw = PINE & 0xF0;
    
    while(1){
        nsw = PINE & 0xF0;
        if(osw == 0b11100000 && nsw == 0b11110000){
            led = (led << 1) | 1;
            if(led == 0xFF) led = 0xFE;                              
        
            PORTC = led;
        }          
        osw = nsw;
    }           
}
