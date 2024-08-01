#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

int main(void)
{
    srand(time(NULL));
    int count = 0;
    for (int i = 1; i <= 5; i++)
    {
        // x * y = ?
        int num1 = getRandomNumber(i);
        int num2 = getRandomNumber(i);
        
        showQuestion(i, num1, num2);

        int answer = -1; // 세미콜론을 추가해야 합니다.

        scanf("%d", &answer);

        if (answer == -1)
        {
            printf("프로그램을 종료합니다.\n");
            exit(0);
        }
        else if (answer == num1 * num2)
        {
            success(); // 함수 이름을 올바르게 수정했습니다.
            count++;
        }
        else
        {
            fail();
        }
    }

    printf("\n\n 당신은 5개의 비밀번호 중 %d개를 맞혔습니다.\n", count);
    return 0;
}

int getRandomNumber(int level)
{
    return rand() % (level * 7) + 1;
}

void showQuestion(int level, int num1, int num2)
{
    printf("\n\n\n\n####### %d 번째 비밀번호 ########\n", level);
    printf("\n\t%d * %d는 ? \n\n", num1, num2);
    printf("####################\n");
    printf("\n비밀번호를 입력하시오 (종료: -1) >> ");
}

void success()
{
    printf("\n>> 좋아요! 정답입니다! \n");
}

void fail()
{
    printf("\n>> 땡! 오답입니다! \n");
}