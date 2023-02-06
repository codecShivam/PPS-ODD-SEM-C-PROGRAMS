#include <stdio.h>
#include <math.h>
int armstrong(int);
int main()
{
    int num, n, i;
    printf("Enter maximum range upto which you wants to print armstrong number:");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        n = armstrong(i);
        if(n!=0)
        printf("%d\t", n);
    }
}
int armstrong(int i)
{
    int n, c=0, sum = 0, rem;
    n = i;
    while (n != 0)
    {
        n = n / 10;
        c++;
    }
    n = i;
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + pow(rem, c);
        n = n / 10;
    }
    if (sum == i)
    {
        return i;
    }
    else{
        return 0;
    }
}