#include<stdio.h>

void namaste();
void bonjour();

int main(){
    printf("Enter I for Indian and F for french: ");
    char ch;
    scanf("%c",&ch);

    if (ch=='I'||ch=='i')
    namaste();
    if(ch=='F'||ch=='f')
    bonjour();
    else
    printf("Wrong Input!");
    return 0;
}

void namaste(){
    printf("Namaste\n");
}

void bonjour(){
    printf("Bonjour\n");
}