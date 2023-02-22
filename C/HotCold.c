#include<stdio.h>

int main()
{ 
    int t;
    printf("enter the temperature\n");
    scanf("%d", &t);
    if(t>=25)
        {
          printf("HOT\n");
            
        }
    else if(t<=15)
        {
          printf("COLD\n");
        }
    return 0;
}
