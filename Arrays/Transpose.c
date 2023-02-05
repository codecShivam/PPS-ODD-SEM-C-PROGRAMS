#include <stdio.h>
              //TRANSPOSE OF A MATRIX
int main()
{
    int i, j, a[10][10], r, c;
    printf("Enter rows and colomns respectively:\n");
    scanf("%d%d", &r, &c);
    printf("Enter values  of 2d array:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Transpose of matrix is:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {   
            printf(" %d", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}