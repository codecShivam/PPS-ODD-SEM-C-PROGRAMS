#include <stdio.h>

int main()
{
    int n;
    printf("Enter number");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("natural number");
    }
    else
    {
        printf("not natural number");
    }
    return 0;
}