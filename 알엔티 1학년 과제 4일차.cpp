#include<stdio.h>

main(){
	
//	int a, b;
//	printf("�� : ");
//	scanf("%d", &a);
//	printf("�� : ");
//	scanf("%d", &b);
//	int c = a;
//	
//	for(int i = 1; i < b; i++){
//		c *= a;
//	}
//	printf("%d�� %d���� : %d", a, b, c);
	
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
//			printf("������ �ɷȽ��ϴ�.\n%dȸ ȸ��", i);
//			break;
//		}
//	}printf("Ż��"); 
	
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
//		printf("1000���� %d��ŭ �۴�.", 1000 - a);
//	}else if(a > 1000){
//		printf("1000���� %d��ŭ ũ��.", a - 1000);
//	}else{
//		prinf("�� 1000�̴�.");
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
