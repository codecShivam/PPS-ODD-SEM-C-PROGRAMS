#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the valur of number 1: ");
    scanf("%d",&a);
    printf("Enter the value of number 2:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping number: %d%d",a,b);
    
    return 0;  
}