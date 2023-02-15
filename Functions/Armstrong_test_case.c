#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// programe to calculate sum of armstrong numbers in given intervalsss(t)
int x;
int isarm(int x)
{
    int b = 0;
    int count, n, f, rem, j, sum;
    for (count = 0, n = x; n > 0; n /= 10)
    {
        count++;
    }
    for (n = x, sum = 0; n > 0; n /= 10)
    {
        rem = n % 10;
        sum = sum + pow(rem, count);
    }
    if (sum == x)
    {
        b = 1;
    }
    return b;
}
int main()
{
    int a[20], b[20], s[20], arm, lb, ub, t, i;
    printf("Hello world!\n");
    //  return 0;
    printf("enter t such as 0<t>10 \n");
    scanf("%d", &t);
    if (t < 10 && t > 0)
    {
        for (i = 0; i < t; i++)
        {
            printf("enter lower bound from 1-100 for case no-%d \n", i);
            scanf("%d", &a[i]);
            printf("enter upper bound 100-9999 for case no-%d \n", i);
            scanf("%d", &b[i]);
        }
        for (i = 0; i < t; i++)
        {
            if (a[i] > 0 && a[i] < 101 && b[i] > 99 && b[i] < 10000)
            {
            }
            else
            {
                printf("plz enter values in domains");
                return 0;
            }
        }
        for (i = 0; i < t; i++)
        {
            s[i] = 0;
            for (int f = a[i]; f < b[i]; f++)
            {
                arm = 0;
                arm = isarm(f);
                if (arm == 1)
                {
                    s[i] = s[i] + f;
                }
            }
        }
    }
    else
    {
        printf("plz enter values in given domain");
    }
    printf("your result-:");
    for (i = 0; i < t; i++)
    {
        printf("%d \n", s[i]);
    }
}