#include <stdio.h>

int main()
{
    float a, b, h;
    printf("ENter base and height of triangle");
    scanf("%f%f", &b, &h);
    a = (1 / 2) * b * h;
    printf("Area of triangle is %f",a);
    return 0;
}