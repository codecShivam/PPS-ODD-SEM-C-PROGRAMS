#include <stdio.h>
#include <math.h>


int main()
{
    int n1, n, rem, c = 0, sum = 0;
    printf("Enter nmber:");
    scanf("%d", &n);
        n1 = n;
        while (n1 != 0)
        {
            n1 = n1 / 10;
            c++;
        }
        n1=n;
        while (n1 != 0)
        {
            rem = n1 % 10;
            sum = sum + pow(rem, c);
            n1 = n1 / 10;
        }if (sum == n)
        {
            printf("%d is a armstrong number", n);
        }else
        {
            printf("%d is not a armstrong number", n);
        }
    
    return 0;
}