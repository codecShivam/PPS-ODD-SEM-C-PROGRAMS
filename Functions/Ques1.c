#include<stdio.h>
              //WAP TO FIND THE NUMBER OF WAYS OF DISTRIBUTING M MANGOES TO N PEOPLES
int fact(int );

int main(){
    int m,n;
    printf("Enter the number of person:\n");
    scanf("%d",&n);
    printf("Enter the number of mangoes:\n");
    scanf("%d",&m);
    printf("The number of ways are %d",fact(m+n-1)/(fact(n-1)*fact(m)));
    return 0;
}

int fact(int n){
    int f=1;
    for(int i=1; i<=n; i++)
    {
        f=f*i;
    }
    return f;
}