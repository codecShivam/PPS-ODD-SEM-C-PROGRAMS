#include<stdio.h>

void check_prime(int);

int main(){
    int n;
    printf("Enter number upto which you want to print prime numbers:\n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        check_prime(i);
    }
}

void check_prime(int i){
    int j,c=0;
    for(j=1; j<=i; j++)
    {
        if(i%j==0)
        {
            c++;
        }
    }
    if(c==2)
    {
       printf("%d ,",i);
    }
}