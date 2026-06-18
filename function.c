#include<stdio.h>
int sum(int a, int b)
{
    return (a+b);
}

int main()
{
    int a,b,c;

    printf("Enter the value: ");
    scanf("%d",&a);

    printf("Enter the second value: ");
    scanf("%d",&b);

    c=sum(a,b);

    printf("The sum is: %d",c);

    return 0;
}
