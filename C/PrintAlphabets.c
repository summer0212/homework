#include <stdio.h>

int main()
{
    int *ptr,i;
    ptr=&i;
    for(i=65;i<=90;i++)
    {
        printf("%c ", *ptr);
    }
return 0;
}