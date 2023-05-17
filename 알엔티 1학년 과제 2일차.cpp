#include <stdio.h>

main(){
	char c1, c2, c3;
	int d1, d2, d3;
	int a = 0, s;
	char ds;
	
	//카드의 문자와 숫자는 붙여서 입력할 것
	printf("첫번째 카드 문자와 숫자 입력 : ");
	scanf("%c%d%c", &c1, &d1, &ds);
	printf("두번째 카드 문자와 숫자 입력 : ");
	scanf("%c%d%c", &c2, &d2, &ds);
	printf("세번째 카드 문자와 숫자 입력 : ");
	scanf("%c%d%c", &c3, &d3, &ds);
	
	if(c1 == c2 && c1 == c3){
		if(d1 == d2 && d1 == d3){
			a += 3334;
		}
	}else if(c1 == c2){
		if(d1 == d2 && d1 == d3){
			a += 3333;
		}
	}else if(c2 == c3){
		if(d1 == d2 && d1 == d3){
			a += 3333;
		}
	}else if(c1 == c3){
		if(d1 == d2 && d1 == d3){
			a += 3333;
		}
	}
	if(d1 == d2 + 1 && d2 == d3 + 1){
		a += 3333;
	}
	
	s = (d1 + d2 + d3) % 3;
	if(s == 0){
		a += 3999;
		a += 3000;
		a += s*100;
		a += s*3;
	}else{
		a += 3000;
		a += s*100;
		a += s*3;
	}
	if(d1 + d2 + d3 > 0){
		a += 1;
	}
	
	switch(d1 * d2 * d3){
		case 0: 
		case 1:
		case 8:
		case 27:
		case 64:
		case 125:
		case 216:
		case 343:
		case 512:
		case 729:
			a += 9999;
	}
	
	printf("%d", a);
}
