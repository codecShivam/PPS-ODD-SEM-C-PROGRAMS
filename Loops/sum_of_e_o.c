// WAP to print sum of even and odd number from 1 to N number

#include <stdio.h>

int main()
{
    int n, E = 0, O = 0, temp; // E & O are sum of even and odd digits respectively
    printf("Enter the number:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            E += i;
        }
        else
        {
            O += i;
        }
    }
    printf("Sum of even and odd are %d and %d respectively", E, O);
    return 0;
}