#include<stdio.h>
                        //WAP USING FUNCTION TO PRINT Hello! multiple times
//declaration/prototype
void printHello();

int main()
{
    printHello();//function calling
    printHello();
    printHello(); 
    printHello();
    printHello();
    printHello();
    return 0;
}
//fuction definition
void printHello(){
    printf("Hello!\n");
}