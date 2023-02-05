#include <stdio.h>

int fib(int);

void main()
{
    int n;
    printf("Enter the term up to you want to print fibannoci series: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {
    printf("%d, ",fib(i));
    }
}

int fib(int i){
    if (i==1)
    {
        return 0;
    }
    if (i==2)
    {
        return 1;
    }
    else{
        return fib(i-2)+fib(i-1);
    }
}
