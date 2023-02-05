#include<stdio.h>

int main(){
    int a,b,c,X;
    printf("Enter number");
    scanf("%d%d%d",&a,&b,&c);
    X=a>b? (b>c? b:c) : (a>c? a:c);
    printf("%d is the largest number",X);
    return 0;
}