#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, D, x1, x2, e;
    printf("Enter the cofficient a");
    scanf("%lf", &a);
    printf("Enter the cofficient b");
    scanf("%lf", &b);
    printf("Enter the cofficient c");
    scanf("%lf", &c);
    D = b * b - (4 * a * c);

    if (D >= 0)
    {
        x1 = (-b + pow(D, 0.5)) / (2 * a);
        x2 = (-b - pow(D, 0.5)) / (2 * a);
        printf("Roots are %lf and %lf", x1, x2);
    }

    else if (D < 0)
    {
        e = pow(D, 0.5) / (2 * a);
        printf("Roots are %lf + i%lf and %lf - i%lf", -b / (2 * a), e, -b / (2 * a), e);
    }
    return 0;
}