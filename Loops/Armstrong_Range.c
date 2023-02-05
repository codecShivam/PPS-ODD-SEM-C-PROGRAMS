#include <stdio.h>
#include <math.h>
int main()
{
    int n1, n2, Y=0, i, j, N=0,c=0, M=0, sum = 0;
    printf("Enter number:");
    scanf("%d", &n1);
    printf("Enter number:");
    scanf("%d", &n2);
    j = n1;
    while (j <= n2)
    {
        N=j;
        M=j;
        while(M!=0)
        {
            M=M/10;
            c++;
        }
        while (N != 0)
        {
            Y = N % 10;
            sum = sum + pow(Y, c);
            N = N / 10;
        }
        if (sum == j)
        {
            printf("%d ,", j);
        }
        j++;
        sum=0;
        c=0;
    }

    return 0;
}