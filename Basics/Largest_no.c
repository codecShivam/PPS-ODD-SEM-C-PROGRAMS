#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the value of first number");
    scanf("%d", &a);
    printf("Enter the value of second number");
    scanf("%d", &b);
    printf("Enter the value of third number");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("%d is largest", a);
        }
        else
        {
            printf("%d is largest", c);
        }
    }
        else if (b > c)
        {
            printf("%d is largest", b);
        }
    
    return 0;
}
