#include <stdio.h>

int main(void){
    int num1, num2;
    char oper;
    int res;

    printf("수식을 입력하세요 : ");
    scanf("%d %c%d", &num1, &oper, &num2);

    // if (oper == '+')
    // {   res = num1+num2;
    //     /* code */
    // }
    // else if(oper == '-'){
    //    res = num1 -num2;
    // }
    // else if(oper == '*'){
    //     res = num1 *num2; 
    // }
    // else if(oper == '/'){
    //     res = num1 /num2; 
    // }
       switch (oper){
       case '+':
       res = num1+num2;
       case '-':
       res = num1-num2;
       case '/':
       res = num1/num2;
       case '*':
       res = num1*num2;
        break;
       
      
    }



    printf("%d %c %d = %d\n", num1, oper, num2, res);




        return 0;
    }
