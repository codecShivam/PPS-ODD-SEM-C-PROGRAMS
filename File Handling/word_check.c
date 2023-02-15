#include<stdio.h>
#include<string.h>

void main(){
    FILE *fp;
    int count=0;
    char fname[100],word[10];
    fp=fopen(fname,"r");
    if(fp==NULL)
    {
        printf("Error");
    }
    else{
        printf("Enter your word:");
        scanf("%s",word);
        while (!feof(fp))
        {
           fscanf(fp,"%s",fname);
           if(strcmp(fname,word)==0)
           {
            count++;
           }
        } 
        printf("Yes! the word '%s' exists in file.",word);00
        printf("Number of occurence of given word is %d",count);
        fclose(fp);
    }
}