#include <stdio.h>

void main()
{
    int a[] = {2, 4, 3, 0, -7};
    int *p = a;
    // printf("%d",*p);
    int *q = &a[3];
    printf("*q-p = %ld\n ", q - p);
    printf("*p-q = %ld\n ", p - q);
    q = q - 2;
    printf("value = %d\n", *q);
    p = p + 2;
    printf("value = %d\n", *p);
    printf("*q-p = %ld\n", q - p);
    q = q - 2;
    printf("Value %d\n", *q);
}