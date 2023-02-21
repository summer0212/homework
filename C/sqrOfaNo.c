#include <stdio.h>
#include <math.h>

int printSqr(int input);
int main()
{
    int n,s;
    printf("enter a number\n");
    scanf("%d", &n);
    s=printSqr(n);
    printf("square of a number is: %d",s);
    return 0;
}




int printSqr(int input )
{
    int sqr;
    sqr=pow(input,2);
    return sqr;
       
}