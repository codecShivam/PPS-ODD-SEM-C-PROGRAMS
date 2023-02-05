//***********With NO ARGUMENT WITHOUT RETURN TYPE******************
#include<stdio.h>
int sum(int a,int b){
    return a+b;
}
int main(){
    int a,b,c;
    a=8;
    b=7;
    c=sum(a,b);
    printf("%d",c);  
      return 0;
}

