#include<stdio.h>
int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d",&age);

    if (age>=18)
    {
        printf("You Can apply for your lisence!!");

    }
    else
    {

        printf("You cannot apply for lisence!!");

    }
    return 0;
}