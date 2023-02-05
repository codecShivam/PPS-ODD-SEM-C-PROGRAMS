#include <stdio.h>
//With argument with return value
int sum(int a, int b); //fuction prototype

int main()
{
    int a, b;
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);
   int s=sum(a,b);
   printf("The sum of the numbers are: %d",s);
   return 0; 
}

int sum(int x,int y){
    return x+y;
}
