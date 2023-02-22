#include <stdio.h>

int isPrime(int input);

int isPrime(int input)
{
    int i,factor=0;
    for(i=1;i<=input;i++)
    {
        if (input%i==0)
        {
            factor++;
        }
    }  
      
    if(factor==2)
    {
        return 1;
    }
    return 0;
}    


int main()
{
    int i,input,factor=0;
    printf("enter the number\n");
    scanf("%d", &input);
    for(i=2;i<=input;i++)
    {
        if(isPrime(i)==1) 
        {
            printf("prime no %d\n", i);
        }
    }    
    return 0;
}


