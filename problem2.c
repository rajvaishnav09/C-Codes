#include<stdio.h>
int main()
{
    int a,b,n;
    printf("Enter any NUM: ");
    scanf("%d",&n);
    a=n/10;
    b=n%10;

    printf("\n a=%d,b=%d",a,b);
    a=n/100;
    a=n%100;

    printf("\na=%d,b=%d",a,b);

    a=n/1000;
    b=n%1000;

    printf("\n a=%d,b=%d",a,b);

    a=n/10000;
    b=n%10000;

    printf("\n a=%d,b=%d",a,b);

}