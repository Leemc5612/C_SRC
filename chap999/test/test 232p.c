#include <stdio.h>

void sum (int x, int y);

int main(void){
	
	sum(5, 10);
    sum(60, 100);
   
    
    return 0;
}

void sum(int x, int y){
    int i;
    int hap = 0;

    for(i = x; i < (y+1); i++){   
        hap = hap + i;
    }

    printf("%d부터 %d까지의 합은 %d입니다.\n", x, y, hap);
}



