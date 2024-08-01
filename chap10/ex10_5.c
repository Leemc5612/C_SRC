#include <stdio.h>

void print_ary(int *pa);           // 주소를 받는다
int main(void)
{
	int ary[5] = {10, 20 ,30 ,40, 50};

    print_ary(ary, );          //함수 호출
	
	
    return 0;
}

void print_ary(int *pa)
{
    int i;
    for(i = 0; i < 5; i++){
        printf("%d", *(pa+i));
        //printf("%d", *pa);
    }
}
