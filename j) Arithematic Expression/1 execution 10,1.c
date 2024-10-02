/*arithmetic expression*/
#include <stdio.h>
int func1(int a);

int main()
{
    int a,b,A,S,R;
    float c,d,M,D;
    a = 20; b = 10; c = 5.50; d = 2.50;
    A = a + b; S = a - b; M = c * d; D = c / d;
    //reminder or modulus
    R = 5 % 2;
    printf("A is %d, S is %d, M is %f, D is %f\n", A,S,M,D);
    printf("R is %d\n", R);
    //printf function speciality
    printf("a is %d and function return value is: %d", a, func1(a));
    return 0;
}

int func1(int a)
{
    /* ARITHMETIC EXPRESIION AFTER RETURN KEYWORD */
    return a*10;
}