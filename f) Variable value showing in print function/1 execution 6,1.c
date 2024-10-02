/*printf( )'s basic backlash constants*/
#include<stdio.h>

int main()
{
    /*new line application*/
    printf("this is 1st line\n");
    printf("this is 2nd line");

    printf("\n");

    /*new tab application*/
    printf("this is 1st line\t");
    printf("this is 2nd line");

    return 0;
}