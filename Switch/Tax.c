#include <stdio.h>

int main()
{
    float inc, tax;
    int fig_code;
    printf("1 if income less than 150000\n");
    printf("2 if income is the range 15000 to 300000\n");
    printf("3 if income is in the range 300001 to 500000\n");
    printf("4 if income is above 150000\n");

    printf("Enter figure code:");
    scanf("%d", &fig_code);

    switch (fig_code)
    {
    case 1:
        printf("Enter income:");
        scanf("%f", &inc);
        printf("No need to pay tax:");
        break;
    case 2:
        printf("Enter income:");
        scanf("%f", &inc);
        tax = (inc - 150000) * 0.1;
        break;
    case 3:
        printf("Enter income:");
        scanf("%f", &inc);
        tax = 15000 + (inc - 300000) * 0.2;
        break;
    case 4:
        printf("Enter income:");
        scanf("%f", &inc);
        tax = 55000 + (inc - 500000) * 0.3;
    default:
        printf("Error in figure code");
        break;
    }
    printf("You need to pay tax of %f", tax);
}