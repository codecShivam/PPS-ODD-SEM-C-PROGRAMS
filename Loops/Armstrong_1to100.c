#include <stdio.h>
#include<math.h>

int main()
{
    int i,c=0,sum=0,j,n,temp,x;

    for (i = 1; i <= 100; i++)
    {
        temp=i;
        x=i;
        while (i != 0)
        {
            i = i / 10;
            c++;
        }
        for(j=1; j<=temp; j++)
        {
            n=temp%10;
            sum+= pow(n,c);
            temp=temp/10;
        }
        if(sum==x)
        {
            printf("%d",sum);
        }
        sum=0;
        c=0;
    }
    return 0;
}