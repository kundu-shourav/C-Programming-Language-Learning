/* local and global variables*/
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
    printf("global variable a is : %d\n", a);
}

void fun2(void)
{
    int a = 20;
    printf("here a is local variable: %d", a);
}


