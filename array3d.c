#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,n;
    printf("Enter the n value: ");
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
            printf("Enter the second value: ");
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    

    

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }
    return 0;


}