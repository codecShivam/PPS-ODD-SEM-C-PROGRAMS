#include <stdio.h>
#include <math.h>
       // 1 + x/1! + x^2/2! + x^3/3! ------------x^n/n!
int main()
{
    int x, n, i, j, f = 1;
    float s = 1.0;
    printf("Enter the value of variable which is x:");
    scanf("%d", &x);
    printf("Enter the number upto which you want to find expansion");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            f = f * i;
        }
        s = s + pow(x, i) / f;
    }
    printf("%f", s);

    return 0;
}