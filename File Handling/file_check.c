#include <stdio.h>8/
#include<string.h>

void main()
{
    FILE *fp, *fq;
    char fname1[100], fname2[100], ch[100];
    printf("Enter first file path:\n");
    scanf("%s", ch);
    fp = fopen(ch, "r");
    if (fp == NULL)
    {
        printf("Error: Unable to open the first file:\n");
    }
    printf("Enter second file path:\n");
    scanf("%s", ch);
    fq = fopen(ch, "r");
    if (fq == NULL)
    {
        printf("Error: Unable to open the second file:\n");
    }
    while ((! feof (fp)) && (! feof (fq)))
    {
        fscanf(fp, "%s", fname1);
        fscanf(fq, "%s", fname2);
        if (strcmp(fname1, fname2) != 0)
        {
            printf("The content of files are not same.");
        }
        else
        {
            printf("The content of the files are same");
        }
    }
    fclose(fp);
    fclose(fq);
}