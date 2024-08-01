#include <stdio.h>

int main(void)
{
	int kor, eng, mat;
	int tot;
	
	kor = 70;
	eng = 80;
	mat = 90;
	tot = kor + eng + mat;
	
	printf("국어 : %d ", kor);
	printf("영어 : %d ", eng);
	printf("수학 : %d\n ", mat);
	printf("총점 : %d\n", tot);
return 0;
}

