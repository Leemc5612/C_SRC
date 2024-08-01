#include <stdio.h>
#include <stdlib.h>
//./main 10 ㅁ 누가 입력을 했는데 한개를 입력하면 잘못입력햇다 return 쓰기 
//실행을 했는데 1개나 2개 입력햇을때 , 3개이하로 들어오면 잘못입력했습니다 리턴 하기.



int main(int argc, char *argv[]) //argc 문자 개수 //argv 문자열의 주소를 저장하는 포인터 배열
{
    if (argc != 3)
    {
        return 0;
    }
    else {
        printf("%s + %s : %d\n", argv[1], argv[2], atoi(argv[1])+atoi(argv[2]));
    }
      

    return 0;
}

 //*argv[0] 출력 

    // for(int i = 0; i< argc; i++)
    // {
    //     printf("argc %d번 요소 : %s\n", i, argv[i]);
    // }
    
    // printf("argc 0번 요소 : %s\n", argv[0]);
    

