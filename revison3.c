#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the fisrt num: ");
        scanf("%d",&a);

    printf("Enter second num: ");
        scanf("%d",&b);

    printf("Enter third num: ");
        scanf("%d",&c);

    if(a>b && a>b)
        printf("%d is bigger",a);

    else if(b>a && b>c)
        printf("%d is bigger",b);

    else
    {
        printf("%d is bigger",c);
    }
}