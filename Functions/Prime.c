#include <stdio.h>

void check_prime(int);

int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);
    check_prime(n);
}

void check_prime(int n)
{
    int j, c = 0;
    for (j = 1; j <= n; j++)
    {
        if (n % j == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        printf("%d is a prime number", n);
    }
    else{
        printf("%d is not a prime number",n);
    }
}