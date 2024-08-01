#include <stdio.h>

int main(void)
{
    int a = 1;
    int i = 1;

    // for (i = 1; i < 11; i++){
    //     a = a + i;
    // }

    while (i < 11)
    {
        a = a + i;
        i++;
    }
    printf("a : %d\n", a);
    printf("%d\n", i);
    return 0;
}