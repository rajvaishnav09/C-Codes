#include<stdio.h>
int main()
{
    int a[5],i;
    for(i=0; i<5; i++)
    {
        printf("Enter the value: ");
        scanf("%d",&a[i]);
    }

    for(i=0; i<5; i++)
    {
        printf("\nYou Entered: %d",a[i]);
    }
}