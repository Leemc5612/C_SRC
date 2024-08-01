#include <stdio.h>

int main(void)
{

    int num_1000, num_100, num_10, num_1;
    num_1000=4654/1000;
    num_100=(4654%1000)/100;
    num_10=(4654%100)/10; 
    num_1=4654%10;    
    printf("%d\n", num_1000);
    printf("%d\n", num_100);
    printf("%d\n", num_10);
    printf("%d\n", num_1);
return 0;
}