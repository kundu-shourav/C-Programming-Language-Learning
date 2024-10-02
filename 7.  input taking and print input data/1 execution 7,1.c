/* input taking and print that input data*/
#include <stdio.h>

int main()
{
    //variable declaration
    char c; int a; float b; double f;
    /* variable value input and print*/
    printf("enter your character data: ");
    scanf("%c", &c); printf("your character data is %c\n", c);
    printf("enter your integer data: ");
    scanf("%d", &a); printf("your integer data is %d\n", a);
    printf("enter your floating data: ");
    scanf("%f", &b); printf("your floating data is %f\n", b);
    // notice the difference of format specifier
    printf("enter your double data: ");
    scanf("%lf", &f); printf("your double data is %f\n", f);
    
    return 0;
}
