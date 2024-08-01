#include <stdio.h>

int func (int x, int y);

int main(void)
{
    int a;
    int b;
    int num = 0;
    
    printf("숫자와 원하는 자리수의 숫자를 입력하시오:");
    scanf("%d%d",&a,&b);
    num = func (a,b);

    printf("숫자%d의 %d의자리는 숫자 %d입니다.\n", a, b,num);

    return 0;
}    

int func (int x, int y)
{
    int temp;
    temp=(x/y)%10;
    return temp;
}

    // printf("%d\n", (a/1)%10);            //1의 자리
    // printf("%d\n", (a/10)%10);           //10의 자리
    // printf("%d\n", (a/100)%10);          //100의 자리
