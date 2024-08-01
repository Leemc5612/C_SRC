#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *afp, *bfp, *cfp;
    char aword[10][20];
    char bword[10][20];
    char cword[10][20];
    char *res;
    int i,j;

    // -------------------------------  파일 오픈  -------------------------------------
    // a.txt
    afp = fopen("a.txt", "r");
    if(afp == NULL)
    {
        printf("파일이 열리지 않았습니다.\n");
        return 1;
    }
    // b.txt
    bfp = fopen("b.txt", "r");
    if(bfp == NULL)
    {
        printf("파일이 열리지 않았습니다.\n");
        return 1;
    }
    // c.txt
    cfp = fopen("c.txt", "w");
    if(cfp == NULL)
    {
        printf("파일이 열리지 않았습니다.\n");
        return 1;
    }

    // ----------------------------------  파일값 저장------------------------------
    // a값 저장
    for(i=0; i<10; i++)
    {
        res = fgets(aword[i] + 0, sizeof(aword[i]), afp);       
        if(res == NULL)
        {
            break;
        }
        // printf("%s", aword[i]);
    }

    // b값 저장
    for(i=0; i<10; i++)
    {
        res = fgets(bword[i] + 0, sizeof(bword[i]), bfp);       
        if(res == NULL)
        {
            break;
        }
        // printf("%s", aword[i]);
    }

    //c값 저장
    int temp = 0;
    int cnt = 0;

    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            if( strcmp(aword[j], bword[i])==0 )
            {
                temp = 1;
                break;              //같은게 있으면 1
            }
           
        if(temp == 0)
        {   //c에 저장
            strcpy(cword[cnt], bword[i]);
            cnt ++;
        }
        temp = 0;
    }



    // ----------------------  파일 닫기-------------------------------
    fclose(afp);
    fclose(bfp);
    fclose(cfp);


    return 0;
 
}