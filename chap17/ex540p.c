#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    int num;
    char name[20];
    int kor;
    int eng;
    int math; 
    int tot;
    double avg;
    char garde;
    
};

void print_student(struct student *);
void input_info(struct student *);
void sort_avg(struct student *);

int main(void) 
{
    struct student s1[5];
    int i;
    
    input_info(s1); 
    printf("# 정렬 전 데이터....\n");
    print_student(s1);

    sort_avg(s1);
    
    printf("# 정렬 후 데이터....\n");
    print_student(s1);
   
    return 0;
}

void input_info(struct student *s1)
{
    int i;
    for(i=0; i < 5; i++)
    {
        printf("학번 : ");
        scanf("%d", &s1[i].num);
        printf("이름 : ");
        scanf("%s", s1[i].name);
        printf("국어, 영어, 수학 점수 : ");
        scanf("%d%d%d", &s1[i].kor, &s1[i].eng, &s1[i].math);
        s1[i].tot = s1[i].kor+s1[i].eng+s1[i].math;
        s1[i].avg = s1[i].tot / 3.0;
       
    }
}

void print_student(struct student *s1)
{
    int i;
    for(i=0; i < 5; i++)
    {
        printf("%d\t%s\t%d\t%d\t%d\t%d\t%.1lf\t\n",
                s1[i].num,s1[i].name,s1[i].kor,s1[i].eng,s1[i].math,s1[i].tot,s1[i].avg);
        
    }
}

void sort_avg(struct student *s1)
{
    int i, j;
    struct student temp;

    for (i=0; i<4; i++)
    {
        for(j=i + 1; j<5; j++)
        {
            if (s1[i].avg < s1[j].avg)
            {
                temp = s1[i];
                s1[i] = s1[j];
                s1[j] = temp;
            }
        }
    }
}