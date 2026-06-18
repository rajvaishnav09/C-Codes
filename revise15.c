#include<stdio.h>
int main()
{
    int a[6],i;
    for(i=0; i<6; i++)
    {
        printf("Enter the array: ");
        scanf("%d",&a[i]);
           
    }

    for(i=0; i<6; i++)
    {
        printf("\n array is:%d",a[i]);
    }
    return 0;


}