#include<stdio.h>
#include<string.h>
int main()
{
    char i,name[5][20];
    for(i=0; i<5; i++)
    {
        printf("Enter your name:");
        gets(name[i]);
    }

    for(i=0; i<5; i++)
    {
        printf("\nYour name is: %s",name[i]);
    }
}