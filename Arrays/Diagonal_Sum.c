#include <stdio.h>
      //SUM OF MAJOR DIAGONAL OF A MATRIX & SUM OF MINOR DIAGONAL OF A MATRIX
int main() 
{
    int a[100][100], n, i, j, r=0, sum = 0;
    printf("Enter the order of the square matrix:\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            sum = sum + a[i][j];
        }
        for (j = 0; j < n; j++)
        {
            if ((i + j) == n-1)
            r = r + a[i][j];
        }
    }
    printf("Sum of major diagonal=%d\n", sum);
    printf("Sum of minor diagonal=%d\n", r);
    return 0;
}