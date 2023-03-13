#include <stdio.h>

int main()
{
    int a, b, c, X;
    printf("Enter number");
    scanf("%d%d%d", &a, &b, &c);
    X = a > b ?  (a > c ? a : c) : (b > c ? b : c);
    printf("%d is the largest number", X);
    return 0;
}