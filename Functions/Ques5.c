#include <stdio.h>
#include<math.h>
               //Using test case wap to find a^b^c
int exponential(int, int, int);

int main()
{
    int n, a, b, c;
    printf("Enter the number of test case:\n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("Enter number a,b and c:\n");
        scanf("%d%d%d", &a, &b, &c);
        printf("%d\n",exponential(a, b, c));
    }
    return 0;
}

int exponential(int a,int b,int c){
    return pow(pow(a,b),c);
}