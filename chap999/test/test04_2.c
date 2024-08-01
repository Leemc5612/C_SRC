#include <stdio.h>

int main(void)
{
    int i, j;
    int a;
   
    
    printf("몇줄 : ");
    scanf("%d", &a);
    
    for (j = 0; j < a; j++)
    {
        for(i = a; i > j; i --)
        {
            printf("*");    
        }
        printf("\n");
    }
    
    
  


    return 0;

}