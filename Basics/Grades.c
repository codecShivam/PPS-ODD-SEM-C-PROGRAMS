#include<stdio.h>

int main(){
    int m1,m2,m3,m4,m5,total,percentage;
    printf("Enter marks of all five subjects");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);

    total = m1+m2+m3+m4+m5;
    printf("Total marks : %d", total);
    percentage=total/5;

    if (9<percentage<=10)
    {
        /* code */printf("Grade=A");
    }
    else if (8<percentage<=9)
    {
        /* code */printf("Grade=B");
    }
    else if (7<percentage<=8)
    {
        /* code */printf("Grade=C");
    }
    else{
        printf("Grade=D");
    }
    return 0;

}