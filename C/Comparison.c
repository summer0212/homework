#include <stdio.h>

int main()
{
    int n1,n2;
    printf("Enter a number: \n");
    scanf("%d", &n1);
    printf("Enter a number: \n");
    scanf("%d", &n2);
    int *ptr= &n1;
    int *ptr1= &n2;
    if(*ptr>=*ptr1)
    {
        printf("The maximum number is:%d\n", *ptr);
    }
    else
    {
      printf("The maximum number is:%d\n", *ptr1);  
    }
    return 1;

}