#include <stdio.h>
int main(){
    int n,A,r,sum=0;
    printf("enter a no.\n");
    scanf("%d", &n);
    A=n;
    while(n>0){
     r=n%10;
     sum=sum+(r*r*r);
     n=n/10;
    }
    if(sum==A)
    printf("Armstrong number");
    else
    printf("Not an armstrong number");
    return 0;
}
