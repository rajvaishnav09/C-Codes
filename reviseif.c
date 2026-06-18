#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number: ");
    scanf("%d",&a);

    printf("Enter the second number: ");
    scanf("%d",&b);

    if (a>b)
    printf("%d is greter!!",a);

    else
        printf("%d is greater!!",b);
}