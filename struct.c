#include<stdio.h>
#include<string.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student r;

    printf("Enter the name of student: ");
    
    gets(r.name);

    printf("Enter the roll number of student: ");
    scanf("%d",&r.roll);

    printf("Enter the marks of student: ");
    scanf("%f",&r.marks);

    printf("\nThe student is: %s",r.name);

    printf("\nRoll number: %d",r.roll);

    printf("\nMarks:%.2f",r.marks);

}