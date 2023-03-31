#include <delay.h>
#include <mega128.h>

flash unsigned char led[8] = {0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F};

void main(void){
    int i;
    DDRC = 0xFF;
    
    while(1){
        for(i = 0; i < 9; i++){
            PORTC = led[i];
            delay_ms(500);
        }
    }
}
