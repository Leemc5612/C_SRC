#include <stdio.h>

struct student{
    int num;
    double grade;
};                      //반듯이 ;을 입력해야함..;

int main(void)
{
    struct student s1;

    s1.num = 2;
    s1.grade = 2.7;
    printf("학번 : %d\n", s1.num);
    printf("학점 : %.1lf\n", s1.grade);









    return 0;
}