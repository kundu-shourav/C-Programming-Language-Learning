/*printing variable value*/
#include <stdio.h>

int main()
{
    /* variable value declare*/
    char c = 'D'; int a = 23;
    float b = 109.325;  double f = 3142536.34453636366788;
    //printing all
    printf("This is character value: "); printf("%c\n", c);
    printf("This is integer value: "); printf("%d\t", a); printf("%i\n", a);
    printf("This is floating value: "); printf("%f\n", b);
    printf("This is double value: "); printf("%f", f);

    return 0;
}