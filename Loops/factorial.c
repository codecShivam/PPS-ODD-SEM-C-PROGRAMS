#include<stdio.h>

int main(){
    int i,f=1,n;
    printf("Enter the number");
    scanf("%d",&n);
    for ( i=1; i<=n; i++)
    {
        f=f*i;
    }
    printf("%d",f);
    return 0;
}