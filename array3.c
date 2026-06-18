#include<stdio.h>
int main()
{
    int a[50],n, sum=0, i;      

    printf("\nEnter How Many Values : ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Enter the num: ");
        scanf("%d", &a[i]);   
    }

    for(i=0; i<n; i++)
    {
        sum = sum + a[i];    
    }

    printf("Sum = %d\n", sum); 

    return 0;
}