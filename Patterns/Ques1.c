#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter n");       // 12 12 12
    scanf("%d", &n);         // 21 21 21
    for (i = 1; i <= n; i++) // 12 12 12
    {
        if (i % 2 != 0) 
        {
            for (j = 1; j <= 3; j++)
            {
                printf("12");
            }
            printf("\n");
        }
        else
        {
            for (j = 1; j <= 3; j++)
            {
                printf("21");
            }
            printf("\n");
        }
    }
    return 0;
}