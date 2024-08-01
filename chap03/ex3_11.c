#include <stdio.h>

int main(void)
{
	char grade;
	char name[20];
	

	printf("이름 입력 : ");
	scanf("%s", name);
	printf("학점 입력 : ");
	scanf(" %c", &grade);
	printf("%s의 학점은 %c입니다.\n", name, grade);
	
return 0;
}

