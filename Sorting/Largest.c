#include <stdio.h>

int main()
{
    int i, a[10], n, large = 0, sec_large = 0;
    printf("Enter number of digits");
    scanf("%d", &n);
    printf("Enter numbers in 1D array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    large = a[0];
    sec_large = a[0];
    for (i = 1; i < n; i++)
    {
        if (large < a[i])
        {
            large = a[i];
        }
    }
    for (i = 1; i < n; i++)
    {
        if (sec_large < a[i] && a[i] != large)
        {
            sec_large = a[i];
        }
    }
    printf("%d,%d", large, sec_large);
    return 0;
}