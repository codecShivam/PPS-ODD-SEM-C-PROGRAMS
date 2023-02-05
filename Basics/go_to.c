#include<stdio.h>

int main(){
    int num;
    // label:
    // printf("We are inside label\n");
    // goto end;
    // printf("Hello World\n");
    // goto label;
    // end:
    // printf("We are at end\nf");

    for(int i=0; i<8; i++)
    {
        printf("%d",i);
        for( int j=0; j<8; j++)
        {
            printf("Enter the number, enter 0 to exit\n");
            scanf("%d",&num);
            if(num==0){
                goto end;
            }
        }
    }
    end:

    return 0;
} 