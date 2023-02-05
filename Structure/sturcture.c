#include <stdio.h>
#include <string.h>

struct DOB
{
    int date;
    int month;
    int year;
} V;
struct Student
{
    char name[20];
    int rollno;
    float marks;
    struct DOB V;
} S1[100];

int main()
{
    int n, i;
    printf("Enter number of students:");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("Enter record of student %d\n",i+1);
        printf("Enter name:\n");
        scanf("%s",&S1[i].name);
        printf("Enter roll no of student:\n");
        scanf("%d",&S1[i].rollno);
        printf("Enter marks\n");
        scanf("%f",&S1[i].marks);
        printf("Enter date of birth\n");
        scanf("%d%d%d\n",&S1[i].V.date,&S1[i].V.month,&S1[i].V.year);
    }
    for(i=0; i<n; i++)
    {
        printf("Record of student %d\n",i+1);
        printf("Student name:\n");
        puts(S1[i].name);
        printf("Roll no: %d\n",S1[i].rollno);
        printf("Marks: %f\n",S1[i].marks);
        printf("Date of Birth: %d%d%d\n",S1[i].V.date,S1[i].V.month,S1[i].V.year);
    }
    return 0;
}
