#include <mega128a.h>
#include <delay.h>

flash unsigned char seg[10] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f};
void SEG2(int);

void main(void)
{
    int num = 99;
    int i;
    DDRB = 0xF0;
    DDRD = 0xF0;
    DDRG = 0x0F;
    PORTB = 0x00;
    PORTD = 0x00;

while (1)
    {
    SEG2(num);
    num--;
    if(num < 0) num = 99;
    }
}

void SEG2(int num){
    int i, n10, n1;
    n10 = num / 10;
    n1 = num % 10;
    
    for(i = 0; i < 10; i++){ 
        PORTG = 0x08;
        PORTD = (seg[n1] & 0x0F) << 4;
        PORTB = seg[n1] & 0xF0;
        delay_ms(10);
        PORTG = 0x04;
        PORTD = (seg[n10] & 0x0F) << 4;
        PORTB = seg[n10] & 0xF0;  
        delay_ms(10);        
        }
}