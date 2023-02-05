#include<stdio.h>
                      //Fuction to take a number from user and show it as output
//Without argument with return type
int takenum()
{
    int i;
    printf("ENter a number:");
    scanf("%d",&i)
;
return i;
}

int main(){
    int a;
    a= takenum();
    printf("The number is %d",a);
    return 0;
}