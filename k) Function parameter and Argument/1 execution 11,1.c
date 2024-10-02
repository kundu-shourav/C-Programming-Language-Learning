/*function Argument*/
#include <stdio.h>

void sum(int X, int Y);
float divid(float A, float B);

int main()
{
    int a, b; a = 10; b = 20;
    float c,d; c = 5.67; d = 2.34;
    sum(a,b);
    printf("answer is : %f\n", divid(c,d));

    return 0;
}

void sum(int X, int Y)
{
  printf("SUM is: %d\n", X+Y);
}

float divid(float A, float B)
{
  int a,b; a = 2; b = 5;
  //function call from another function
  sum(a,b);

  return A/B;
}