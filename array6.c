#include<stdio.h>
int main()
{
    int a[50],i,n;
    printf("Enter how many value: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Enter the value: ");
        scanf("%d",&a[i]);
    }
   for(i=0; i<n; i++)
    {
        printf("You Entered:%d\n",a[i]);
    }
    return 0;
}