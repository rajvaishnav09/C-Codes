#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter first num: ");
    scanf("%d",&a);

    printf("Enter second num: ");
    scanf("%d",&b);

    if (a>b)
    {
    printf("%d is Bigger num",a);
    }
    
    else
    {
        printf("%d is Bigger num",b);
    }
    return 0;
}