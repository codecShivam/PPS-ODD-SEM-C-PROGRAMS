#include <stdio.h>
#include <string.h>
int main()
{
    int i,d;
    char str1[20],str2[20];
    printf("Enter the string:\n");
    gets(str1);
    gets(str2);
    i = strlen(str1);
    puts(str1);
    printf("%d, is the string length ", i);
    strcpy(str1, str2);
    puts(str1);
    d=strcmp(str1,str2);
    if(d=0)
    printf("string equal");
    else{
    printf("no");
    }
    return 0;
}