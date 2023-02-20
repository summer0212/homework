#include <stdio.h>
int main()
{
    int i,input,j,factor=0;
    printf("enter the number\n");
    scanf("%d", &input);
    for(i=1;i<=input;i++)
    {
        for(j=2;j<=input;j++)
        {
            if(i%j==0)
            {
                factor++;
                break;
            }
        }
        if(factor==2 && i!=1)
        {
            printf("%d",i);
        }
    }
    return 0;
}