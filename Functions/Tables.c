#include<stdio.h>
                //PROGRAM TO PRINT TABLE USING FUNCTION
void printTable(int n);

int main(){
    int n;
    printf("Eneter Number:");
    scanf("%d",&n);
    printTable(n);//argument or actual parameter
    return 0;
}

void printTable(int n){ //parameter or formal parameter 
    for(int i=1; i<=10; i++){
        printf("%d * %d = %d\n",n,i,i*n);
    }
}