#include <stdio.h>

int main(void){
    
    int i;
    int ary[100];
 

    for(i=0; i<100; i++){
        ary[i] = i;
    }
	
    for(i=0; i<100; i++){
        printf("%d", ary[i]);
    }
    return 0;
}

