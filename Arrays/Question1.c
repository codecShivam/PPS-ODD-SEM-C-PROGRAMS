#include <stdio.h>
            //WAP TO PRINT THE SUM OF N DIGITS THEN SUM OF N-1 DIGITS SIMILARLY GOES ON
int main()
{
    int a[10], i, j, n, x = 0, y = 0;
    printf("Enter number of index in matrix:\n");
    scanf("%d",&n);
    printf("Insert elements in the matrix:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (j = 1; j <= n; j++)
    {
        for (i = 0; i <=n- j; i++)
        {
            x = x + a[i];
        }
        printf("%d", x);
        x=0;
    }
    return 0;
}
