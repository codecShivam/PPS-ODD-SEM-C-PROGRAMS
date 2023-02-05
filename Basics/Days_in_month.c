#include <stdio.h>
int main()
{
    int a;
    printf("Enter any month's number between 1 and 12: ");
    scanf("%d", &a);
    if (a>12 || a<1)
    {
        printf("Invalid\n");
    }
    else if(a==2)
    {
        printf("Month %d have 29 or 28 days",a);
    }
    else if(a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12)
    {
        printf("Month %d contains 31 days",a);
    }
    else{
        printf("Month %d contains 30 days",a);
    }
    return 0;
}