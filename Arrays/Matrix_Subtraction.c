#include <stdio.h>
              //SUBTRACTION OF MATRIX
int main()
{   
    int a[10][10], b[10][10], r, c,s[10][10], j, i;

    printf("Enter the no of rows and colums respectively:\n");
    scanf("%d%d", &r, &c);

    printf("Insert elements in the array 1:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]); 
        }
    }

    printf("Insert elements in aray 2:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("The Resultant matrix is:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            s[i][j] = a[i][j] - b[i][j];
            printf("%d ",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}

