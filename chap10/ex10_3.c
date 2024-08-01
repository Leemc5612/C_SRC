#include <stdio.h>

int main(void)
{
    int ary[3] = { 10 , 20, 30 };
    int *pa;
    int i;

    pa = ary;           //질문 pa = &ary[0]; 

    
    printf("배열의 값 : ");
    for (i = 0; i < 3; i++)
    {
        printf("%d ", *pa);
        pa++;
    }
	
printf("\n");	
	
    return 0;
}

