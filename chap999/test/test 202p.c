
#include <stdio.h>

int main(void){
	
	int i;
    int sum = 0;

    for ( i = 1; i < 101; i++){

        if ( (i % 5) != 0)
        {
            continue;
        }
        sum += i;
    }
        printf("sum : %d", sum);

	
    return 0;
}

