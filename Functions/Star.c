#include<stdio.h>
                    //Function to print '*' 
//with argument without return value
void printstar(int n){
    for(int i=0; i<n; i++)
    {
        printf("%c", '*');
    }
}

        
int main(){
    printstar(8);
    return 0;
}