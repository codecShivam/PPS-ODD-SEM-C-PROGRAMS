#include <stdio.h>

int main()
{
    float unit, amt, sur_charge,bill;
    int fig_code;

    printf("1 for upto 50 units\n");
    printf("2 for upto 150 units\n");
    printf("3 for upto 250 units\n");
    printf("4 for above 250 units\n");

    printf("Enter the figure code:");
    scanf("%d", &fig_code);

    switch (fig_code)
    {
    case 1:
        printf("Enter units used:");
        scanf("%f", &unit);
        amt = unit * 0.5;
        break;
    case 2:
        printf("Enter units used:");
        scanf("%f", &unit);
        amt = 25 + (unit - 50) * 0.75;
        break;
    case 3:
        printf("Enter units used:");
        scanf("%f", &unit);
        amt = 100 + (unit - 150) * 1.20;
        break;
    case 4:
        printf("Enter units used:");
        scanf("%f", &unit);
        amt = 220 + (unit - 250) * 1.50;
        break;
    default:
        printf("Error in figure code");
        break;
    }
    sur_charge=amt*0.2;
    bill=amt+sur_charge;
    printf("Bill is %f",bill);
}