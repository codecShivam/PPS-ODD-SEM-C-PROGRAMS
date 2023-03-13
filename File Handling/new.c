#include <stdio.h>
#include <strings.h>
#include <string.h>
#include <stdlib.h>
     
int main()
{
    FILE *fp = NULL;
    fp = fopen("myfile.txt", "w");
    fputc('o',fp);
    fputs("This is shivam",fp);
    fclose(fp); 
    return 0;
}