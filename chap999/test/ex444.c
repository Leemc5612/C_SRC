#include <stdio.h>

int main(void){
	int ary[5];
    int i;
    int index;
    // 1
    for(i=0; i < 5; i++){
        printf("%d번 숫자 입력 : ", i+1);
        scanf("%d", &ary[i]);
    }	

    while(1)
    {
        // 2

        printf("출력하고 싶은 숫자의 위치를 입력하세요.(1~5):");
        scanf("%d", &index);

        if( (index > 0) && (index < 6) ){
            printf("%d번의 숫자는 %d입니다.\n", index, ary[index-1]);
        }
        else{
            break;
        }
    }

	return 0;
}