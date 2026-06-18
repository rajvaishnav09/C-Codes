#include<stdio.h>
int main()
{
    int a[5],b[5],c[5],i;
    for(i=0; i<5; i++)
    {
        printf("Enter the value first five: ");
        scanf("%d",&a[i]);
    }

    for(i=0; i<5; i++)
    {
        printf("Enter the second five: ");
        scanf("%d",&b[i]);
    }


    for(i=0; i<5; i++)
    {
            c[i]=a[i]+b[i];

        printf("\nThe value sum is: %d ",c[i]);
    }
}