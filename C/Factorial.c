#include <stdio.h>
 int Factorial(int n);

 int main()
 {
    int x,result;
    printf("Enter a number: \n");
    scanf("%d", &x);
    result=Factorial(x);
    printf("The factorial of the given number is: %d", result);

 }


 int Factorial(int n)
 {
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*Factorial(n-1);
    }
           
 }