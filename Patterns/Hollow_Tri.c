#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j<9-9*i; j++)
        {
            printf(" ");
        } 
        for (j = 9; j >=1; j--)
        {
            if (i == j || (j*i) == i || i == 9)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        
        printf("\n");
    }
    return 0;
}