#include <stdio.h>

int main (void){

    int chest = 90;
    char size;

    if(chest <= 90)
    {
        size = 'S';
    }
    else if ((90 < size)&&(size<= 100))
    {
        size = 'M';
    }
    else
    {
        size = 'L';
    }

    return 0;
}