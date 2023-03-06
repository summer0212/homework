#include <stdio.h>

void swap(int *a,int *b);

int main()
{
    int k,i,c;
    int ar[20]={1,2,3,4,5,6,7,8,9,10};
    c=ar[4];
    ar[4]=50;
    for(k=5;k<11;k++)
    {
        swap(&c, &ar[k]);
        
    }
    for(i=0;i<11;i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}

void swap(int *a,int *b)
{
    int c;
    c= *a;
    *a= *b;
    *b= c;
}