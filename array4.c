#include<stdio.h>
int main()
{
    int a[5],i,sum1=0,sum2=0;
    for(i=0; i<5; i++)
    {
        printf("Enter the  number: ");
        scanf("%d",&a[i]);

    }
    for(i=0; i<5; i++)
    
        if(a[i]%2==0)
        {
        printf("Even num is:%d\n",a[i]);
        sum1 = sum1+a[i];
    }

    
    else
    {
        printf("Odd num is: %d\n",a[i]);
        sum2= sum2+a[i];
    }
    printf("Sum of Even is: %d\n",sum1);
    printf("Sum of Odd is: %d\n",sum2);
    
    return 0;
}