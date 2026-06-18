#include<stdio.h>

int main()
{
    int a[20],i,n;

    printf("How many elements you want in Array= ");
    scanf("%d",&n);

    printf("Enter Array Elements:- ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nArray Elements Are:- ");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }

    return 0;
}