#include <stdio.h>

int main(void){
	int a;
    int *pa;
    double b;
    char c;


    pa = &a;
    *pa = 10;

    printf ("a 변수의 주소 : %p\n", &a);
    printf ("pa에 저장된 변수의 주소 : %p\n", pa);
    //printf ("char형 변수의 주소 : %lu\n", &c);

    printf ("포인터로 a값 출력 : %d\n", *pa);
	printf ("변수명으로 a값 출력 : %d\n", a);

    
	
    return 0;
}

