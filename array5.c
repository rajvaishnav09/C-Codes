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
        if(a[i]%2==0)
        {
            printf("\n%d, The value is Even!!",a[i]);
        }

        else
        {
            printf("\n%d, The value is Odd!!",a[i]);
        }
    }
}