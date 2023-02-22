#include <stdio.h>
#include <math.h>

float sqRoot(float input);

int main()
{
  float n;
  printf("enter a number:\n");
  scanf("%f \n", &n);
  sqRoot(n);
  return 0;
}

float sqRoot(float input)
{  
    printf("the square root of number is:%f\n", sqrt(input));

}