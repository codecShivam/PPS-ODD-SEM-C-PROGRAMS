#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c, i;
    printf("Enter number");
    scanf("%d", &n);
    if (n == 1){
        printf("%d", a);
    }else if (n == 2){
        printf("%d", b);
    }
    else{
        printf("%d,%d", a, b);
        for (i = 1; i <= n - 2; i++){
            c=a+b;
            a=b;
            b=c;
            printf(",%d",c);
        }
    }
    return 0;
}
