#include<stdio.h>
int main()
{
    int a[3][3],i,j,n,sum=0;
    printf("Enter the how many n: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
        printf("Enter the value: ");
        scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            sum=sum+a[i][j];
   
            printf("\t%d",a[i][j]);
            
        }
        printf("\n");

    }
    printf("\n The sum is: %d",sum);
    return 0;
}