#include <stdio.h>
#include <stdlib.h>
#define a 12
#define b 12
int main()
{
    printf("Hello world!\n");
    printf("Sum = %d",(int)a+b);

    int c=1;
    switch(c){
    case 1:printf("\tLoL");
    case 2:printf("\nRofl");
    break;
    default:printf("head West");
    break;
    }
    return 0;
}
