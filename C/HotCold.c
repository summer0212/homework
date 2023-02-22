#include<stdio.h>

void Hot();
void Cold();

int main()
{ 
    int t;
    printf("enter the temperature\n");
    scanf("%d", &t);
    if(t>=25)
        {
           Hot();
            
        }
    if(t<15)
        {
            Cold();
        }
    return 0;
}


void Hot()
{
     int temp;
     if(temp>=25)
     printf("HOT\n");
}

void Cold()
{
    int temp;
    if(temp<15)
    printf("COLD\n");
}