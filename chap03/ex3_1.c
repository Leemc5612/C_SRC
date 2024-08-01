#include <stdio.h>

int main(void)
{
	int a;
	int b, c;
	double da;
	char ch;
	
	b = a;	
	a = 10;
	
	c = a + 20;
	da = 3.5;
	ch = 'A';
	
	printf("변수 a의 값 : %d\n", a);        ///변수는 공간이고 상수는 값이다.
	printf("변수 b의 값 : %d\n", a);
	printf("변수 c의 값 : %d\n", c);
	printf("변수 da의 값 : %.1lf\n", da);
	printf("변수 ch의 값 : %c\n", ch);
	
	
	printf("------------------------------------\n");
	
	char ch1 = 'A';
	char ch2 = 65;
	
	printf("문자 %c의 아스키 코드 값 : %d\n", ch1, ch1);
	printf("아스키 코드 값이 %d인 문자 : %c\n", ch2, ch2);
	
	printf("------------------------------------\n\n");
	short sh = 32769;
	long long lln = 123457890123485598508953424423;
	
	printf("long long형 변수 출력 : %lld\n", lln);
	printf("short형 변수 출력 : %d\n", sh);
	
	printf("------------------------------------\n\n");
	
	
return 0;
}

