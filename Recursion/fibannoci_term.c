#include <stdio.h>
     //PROGRAM TO FIND NTH TERM OF FIBANNOCI SERIES
int fib(int);

void main()
{
    int n;
    printf("Enter the term, you want to find of fibannoci series: ");
    scanf("%d", &n);
    printf("%d term is %d",n,fib(n));
}

int fib(int n){
    if (n==1)
    {
        return 0;
    }
    if (n==2)
    {
        return 1;
    }
    else{
        return fib(n-2)+fib(n-1);
    }
}
