#include<stdio.h>
int main(){
    int n,n1,rev=0,rem=0;
    printf("Enter number: ");
    scanf("%d",&n);
    n1=n;
    while(n1!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n1=n1/10;
    }
    
    if(n==rev)
    {
        printf("Entered number is an palandrome");
    }
    else{
        printf("NOt a palandrome");
    }
    return 0;
}