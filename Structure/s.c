#include<stdio.h>
#include<string.h>

struct DOB{
    int date;
    int month;
    int year;
} V;

struct Student{
    char name[20];
    int rollno;
    float marks;
    struct DOB V;
}S1[200];

int main(){
    int n,i;
    
    printf("ENter number of the student ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("for %d",i+1);
        printf("Nmae");
        gets(S1[i].name);
        printf("Rollno");
        scanf("%d",&S1[i].rollno);
        printf("Marks");
        scanf("%f",&S1[i].marks);
        printf("Dob");
        scanf("%d%d%d",S1[i].V.date,)
    }
}