#include <stdio.h>

int main(void)
{
    char name[256];
    printf("이름이 뭐냐?");
    scanf("%s", name, sizeof(name));

    int age;
    printf("몇살이냐? ");
    scanf("%d", &age);

    float weight;
    printf("몸무게는 몇 kg 이냐? ");
    scanf("%f", &weight); 

    double height;
    printf("키는 몇 cm 이냐? ");
    scanf(%lf)


return 0;
}