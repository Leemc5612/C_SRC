#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct book
{
    char *title;
    char author[20];
    int page;
    int price;
};

struct print_book(struc);

int main(void)
{
    struct book s1;

    s1.title = (char *)malloc(20);
    s1.title = "혼공 c언어";
    strcpy(s1.author, "명철");
    s1.page = 294;
    s1.price = 20000;

    struct print_book(s1);

    // printf("책 제목 : %s\n", s1.title);
    // printf("저자 : %s\n", s1.author);
    // printf("페이지 수 : %dp\n", s1.page);
    // printf("가격 : %d원\n", s1.price);
    
    return 0;
}

struct print_book(s1)
{

}
