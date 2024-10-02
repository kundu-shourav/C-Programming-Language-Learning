#include<stdio.h>
#include<math.h>
/*protype declare*/
void func1(void);
void func2(void);
int func3( );
//parameter type declare in function parameter
float func4(float parameter);

int main()
{
    float a, b = 10.00;
    int c;
    c = func3();
    printf("value is: %d\n", c);
    func1(); func2();
    a = func4(b);
    printf("sqrt answer is : %f\n", a);

    return 0;
}

//function skeletal
void func1( )
{
   printf("this is func1 message.\n");
}
void func2( )
{
   printf("this is func2 message.\n");
   return;
}
int func3( )
{
   return 45;
}

float func4(float parameter)
{
   float x;
   printf("parameter value is : %f\n", parameter);
   x = sqrt(parameter);

   return x;
}