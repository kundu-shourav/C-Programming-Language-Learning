/* local and global variables */
#include <stdio.h>
//function prototype declare
void fun1(void);
void fun2(void);
//global variable declaration
int a = 10;

int main()
{
    fun1(); fun2();
    return 0;
}

void fun1(void)
{
    int b = 30;
    printf("global variable a is : %d\n", a);
    printf("fun1 variable b is : %d\n", b);
}

void fun2(void)
{
    int a = 20;
    printf("here a is local variable: %d", a);
    printf("fun1 variable b is : %d\n", b); --> error line
}