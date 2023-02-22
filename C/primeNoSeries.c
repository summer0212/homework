#include <stdio.h>

int isPrime(int input);

int isPrime(int input)
{
    int i,factor=0;
    for(i=1;i<=input;i++)
      {
        if (input%i==0)
        factor++;
      }  
      
    if(factor==2)
   return input;

}    


int main()
{
int i,input,factor=0;
printf("enter the number\n");
scanf("%d", &input);
    for(i=1;i<=input;i++)
    {
        if(isPrime(input)%i==0 && isPrime(input)!=1) 
        factor++;
    }
if(factor==2)
    printf("prime no %d", input);
else
    printf("not prime %d", input);
return 0;
}


