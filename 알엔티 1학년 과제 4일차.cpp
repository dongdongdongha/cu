#include<stdio.h>

main(){
	
//	int a, b;
//	printf("수 : ");
//	scanf("%d", &a);
//	printf("승 : ");
//	scanf("%d", &b);
//	int c = a;
//	
//	for(int i = 1; i < b; i++){
//		c *= a;
//	}
//	printf("%d의 %d승은 : %d", a, b, c);
	
//	int a, b = 0, i;
//	scanf("%d", &a);
//	if(a <= 50){
//		for(i = 1; i <= a; i++){
//			b += i;
//		}
//	}else{
//		for(i = a; i <= 100; i++){
//			b += i;
//		}
//	}printf("%d", b);
	
//	int a, n=1;
//	scanf("%d", &a);
//	for(int i = 1; i <= a; i++){
//		n += i;
//	}for(int i = 1; i <= a; i++){
//		n *= i;
//	}printf("%d", n);
	
//	int a;
//	for(int i = 1; i < 6; i++){
//		scanf("%d", &a);
//		if(a == 7){
//			printf("함정에 걸렸습니다.\n%d회 회피", i);
//			break;
//		}
//	}printf("탈출"); 
	
//	int a, b, n = 1, c;
//	scanf("%d %d", &a, &b);
//	c = a*b;
//	for(int i = 0; i < 3; i++){
//		n *= c;
//	}printf("%d", n);
	
//	int a, s = 0;
//	scanf("%d", &a);
//	for(int i = 0; i < 5; i++){
//		s += a;
//	}
//	if(a < 1000){
//		printf("1000보다 %d만큼 작다.", 1000 - a);
//	}else if(a > 1000){
//		printf("1000보다 %d만큼 크다.", a - 1000);
//	}else{
//		prinf("딱 1000이다.");
//	}
	
//	int a,n = 0;
//	scanf("%d", &a);
//	for(int i = 1; i <= a; i++){
//		for(int j = 1; j <= i; j++){
//			n += i;
//		}
//	}printf("%d", n);
	
	int a = 0;
	for(int i = 1; i <= 4; i++){
		for(int j = 1; j <= i; j++){
			a++;
			printf("%d ", a);
		}printf("\n");
	}
	
	
}
