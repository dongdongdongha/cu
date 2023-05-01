#include <mega128a.h>

void main(void)
{
    unsigned char key;
    
    DDRE = 0x0;
    DDRC = 0xFF;
    
    PORTC = 0xFF;
    
    while(1){
        key = PINE & 0b11110000;         
        
        switch(key){
            case 0b01110000:
            PORTC = 0b01010101;
            break;      
            
            case 0b10110000:
            PORTC = 0b10101010;
            break;       
            
            case 0b11010000:
            PORTC = 0xff;
            break;             
            
            case 0b11100000:
            PORTC = 0x00;
            break;
        }                
    }
}
