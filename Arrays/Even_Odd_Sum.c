#include <stdio.h>
            //SUM OF EVEN AND ODD DIGITS OF AN ARRAY
int main()
{
    int a[100], n, i, j, sum = 0;
    printf("Enter the order of the matrix:\n");
    scanf("%d", &n);
    printf("Enter values of 1d array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
    if (i % 2 == 0)
    {
        sum = sum + a[i];
    }
    else
    {
        j = j + a[i];
    }
    }
    printf("Sum of even digits=%d\n", sum);
    printf("Sum of odd digits=%d\n", j);
    return 0;
}