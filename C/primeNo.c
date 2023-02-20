#include <stdio.h>
int main(){
    int i,input,factor=0;
    printf("enter a number:\n");
    scanf("%d", &input);
    for(i=2;i<=input;i++)
    {
        if(input%i==0)
        {
            factor++;
        }
    }
    if(factor==2){
        printf("Prime no %d \n", input);
      }
      else{
        printf("Not prime no. %d \n", input);
      }
      return 0;
}
