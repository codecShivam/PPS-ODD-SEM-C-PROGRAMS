#include <stdio.h>

int main()
{
    int n, temp, i, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        temp = n % 10;
        sum += temp;
        n = n / 10;
    }
    printf("The sum of the digits is %d", sum);
    return 0;
}