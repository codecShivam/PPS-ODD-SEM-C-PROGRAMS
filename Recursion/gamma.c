#include <stdio.h>

float gamma(float);

int main()
{
    float n;
    printf("Enter the number you want to find gamma value:\n");
    scanf("%f", &n);
    float x = gamma(n);
    printf(" = %f", x);
    return 0;
}

float gamma(float n)
{
    float temp = (n)* 2;
    printf("%d/2 * ", (int)temp);
    if (n == 0.5)
    {
        printf("sqrt(pi)");
        return 1.7772453851;
    }
    else
    {

        return (n - 1) * gamma(n - 2);
    }
}