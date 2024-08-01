#include <stdio.h>

int main(void)
{
	printf("%010d\n", 10);          //%d는 정수상수 출력 
	printf("%10lf\n", 3.4);		//%lf는 실수상수 출력
	printf("%010.2lf\n", 3.45);	
	printf("%.10lf\n", 3.4);
	
	printf("--------------------\n");
	
	printf("%d과 %d의 합은 %d입니다.\n", 10, 20, 10+20);
	
	printf("Hello world!\n");
	printf("Be\rHappy!\nBaby\n");
	
	
	printf("%d\n", 12);              //10진수 정수 상수 출력
	printf("%d\n", 032);             //8진수 정수 상수 출력
	printf("%d\n", 0xff);             //16진수 정수 상수 출력
	printf("--------------------\n");
	
	
	printf("%o\n", 12);		//10진수를 8진수로 출력 %o
	printf("%x\n", 12);		//10진수를 16진수 소문자 %x
	printf("%X\n", 12);		// ''      16진수 대문자 %X
	printf("---------------------------------------\n");
	
	printf("%.1lf\n", 1e6);		//지수형태의 실수를 소수점 형태로 출력
	printf("%.7lf\n", 3.14e-5);	//소수점 이하 일곱째 자리까지 출력
	printf("%le\n", 0.0000314);	//소수점 형태의 실수를 지수형태로 출력
	printf("%.2le\n", 0.0000314);	//소수점이하 2번째까지 출력
	printf("---------------------------------------\n");
	
	printf("%c\n", 'A');       //문자 상수 출력 문자는 %c 문자열은 %s
	printf("%s\n", "A");
	printf("%c은 %s입니다.\n", '1', "first");
	
		
	printf("---------------------------------------\n");
	
	//변수
	int a;
	int b, c;
	double da;
	char ch ;
	
	a = 10;
	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';
	
	printf("변수 a의 값 : %d\n", a);
	printf("변수 b의 값 : %d\n", b);
	
	
	
	
	
	printf("---------------------------------------\n");
	
	printf("%d\n", sizeof(10));
	printf("%d\n", sizeof(10.0));
	printf("---------------------------------------\n");
	return 0;
}
