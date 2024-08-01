#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *ifp, *ofp;
    char str[80];
    char *res;

    ifp = fopen("a.txt", "r");

    if(ifp == NULL)
    {
        printf("파일이 열리지 않았습니다.\n");
        return 1;
    }

    ofp = fopen("b.txt", "w");

    if(ofp == NULL)
    {
        printf("출력 파일 못 열었엉.\n");
        return 1;
    }

    while (1)
    {
        res = fgets(str, sizeof(str), ifp);      //함수 파일의 데이터를 모두읽으면 EOF를 반환;
        if(res == NULL)
        {
            break;
        }
        str[ strlen(str) -1] = '\0';
        fputs(str, ofp);  
        fputs(" ", ofp);    //표준 출력함수
    }
    fclose(ifp);
    fclose(ofp);

    return 0;
 
}