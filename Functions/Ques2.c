#include<stdio.h>

void printHello();
void printGoodbye();

int main(){
    printHello();
    printGoodbye();
    return 0;
}

void printHello(){
    printf("Hello!\n");
}

void printGoodbye(){
    printf("Goodbye:)\n");
}