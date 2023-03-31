#include <mega128.h>

void main(void){
    DDRC = 0xFF;
    
    PORTC = 0xAA(0b10101010);
    
    while(1);


}