#include <stdio.h>

int isEven(int input);

int main()
{
    int i,n;
    printf("enter a number:");
    scanf("%d \n", &n);
    for(i=0;i<=n;i++)
    {
        if(theSeries(i)==1)
        {
            printf("Even number: %d \n",i);
        }
        else
        {
             printf("Odd number: %d \n",i);
        }
          
    }
return 0;
}


int isEven(int input)
{
        if(input%2==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    
}