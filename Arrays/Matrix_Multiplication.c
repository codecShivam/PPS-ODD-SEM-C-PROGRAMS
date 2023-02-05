#include <stdio.h>
                    //MATRIX MULTIPLICATION
int main()
{
    int a[10][10], b[10][10], c[10][10], i, j, k, r1, c1, r2, c2;
    printf("Enter rows and columns of first matrix respectively:\n");
    scanf("%d %d",&r1,&c1);
    printf("Enter rows and columns of second matrix respectively:\n");
    scanf("%d %d",&r2,&c2);
    if (c1 != r2)
    {
        printf("multiplication not possible");
    }
    else
    {
        printf("Enter elements in array 1\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter elements in array 2\n");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        printf("The resultant matrix is:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < r2; k++)
                {   
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                }
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}