#include <stdio.h>

int main()
{
    int i,c=0;
    int a[6]={1,2,3,4,5,6};
    for(i=0;i<3;i++)
    {
        c=a[i];
        a[i]=a[5-i];
        a[5-i]=c;
    }   
    for(i=0;i<6;i++)
    {
        printf(" %d\t", a[i]);
    }
return 0;
}