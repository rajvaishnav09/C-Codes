#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter the value: ");
    scanf("%d",&a);
    
    printf("Enter the value: ");
    scanf("%d",&b);

    printf("Enter the value: ");
    scanf("%d",&c);

    printf("Enter the value: ");
    scanf("%d",&d);

    printf("Enter the value: ");
    scanf("%d",&e);

    if (a>b && a>c && a>d && a>e)
        printf("%d is the bigest number!!",a);

    else if (b>a && b>c && b>d && b>e)
        printf("%d is the bigest number!!",b);

    else if(c>a && c>b && c>d && c>e)
        printf("%d is the bigest number!!",c);

    else if(d>a && d>b && d>c && d>e)
        printf("%d is the bigest number!!",d);

    else 
        printf("%d is the bigest number!!",e);
        
        return 0;
}