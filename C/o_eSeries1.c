#include <stdio.h>
 int evenNo(int e);


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
        else
        {
            printf("Odd number: %d \n", i);
        }
    }
return 0;
}


int evenNo(int e)
{
    if(e%2==0)
        {
            return 1;
        }
    else
        {
            return 0;
        }
    
}
 
 