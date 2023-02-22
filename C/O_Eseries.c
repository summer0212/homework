#include <stdio.h>

int theSeries(int input);

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
            if(theSeries(i)==0)
            {
                printf("Odd number: %d \n",i);
            }
        }
          
    }
return 0;
}


int theSeries(int input)
{
    int i;
    for(i=0;i<=input;i++)
    {
        if(i%2==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}