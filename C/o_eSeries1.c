#include <stdio.h>
 int evenNo(int e);
 int oddNo(int o);

 int main()
 {
    int input,i;
    printf("Enter a number:\n");
    scanf("%d", &input);
    for(i=0;i<=input;i++)
    {
        if(evenNo(i)==1)
        {
            printf("Even number: %d \n", i);
        }
        else if(oddNo(i)==1)
        {
            printf("Odd number: %d", i);
        }
    }
return 0;
}



int evenNo(int e)
{
    int i;
    for(i=0;i<=e;i++)
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
 
 int oddNo(int odd)
 {
    int i;
    for(i=1;i<=odd;i++)
    {
        if(i%2!=0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
 }