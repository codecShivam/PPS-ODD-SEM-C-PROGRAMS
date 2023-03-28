// #include <stdio.h>
// #include<string.h>

// void main()
// {
//     FILE *fp, *fq;
//     char fname1[100], fname2[100], ch[100];
//     printf("Enter first file path:\n");
//     scanf("%s", fname1);
//     fp = fopen(fname1, "r");
//     if (fp == NULL)
//     {
//         printf("Error: Unable to open the first file:\n");
//     }
//     printf("Enter second file path:\n");
//     scanf("%s", fname2);
//     fq = fopen(fname2, "r");
//     if (fq == NULL)
//     {
//         printf("Error: Unable to open the second file:\n");
//     }
//     while ((! feof (fp)) && (! feof (fq)))
//     {
//         fscanf(fp, "%s", fname1);
//         fscanf(fq, "%s", fname2);
//         if (strcmp(fname1, fname2) != 0)
//         {
//             printf("The content of files are not same.");
//         }
//         else
//         {
//             printf("The content of the files are same");
//         }
//     }
//     fclose(fp);
//     fclose(fq);
// }
#include<stdio.h>
#include<math.h>
int main()
{
    int i,j;
    for(i=5;i>=2;i--)
    {
        for(j=1;j>=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}