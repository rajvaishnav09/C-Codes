#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first value: ");
    scanf("%d",&a);

    printf("Enter the second value: ");
    scanf("%d",&b);

    printf("Enter the third value: ");
    scanf("%d",&c);

    if (a>b && a>c)
    printf("%d is bigest number",a);

    else if (b>a && b>c)
    printf("%d is begest number",b);

    else 
        printf("%d is bigest number",c);

        return 0;

}