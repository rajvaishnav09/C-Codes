#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter the first num: ");
    scanf("%d",&a);

    printf("Enter the second num: ");
    scanf("%d",&b);

    printf("Enter the third num: ");
    scanf("%d",&c);

    printf("Enter the fourth num: ");
    scanf("%d",&d);

    printf("Enter the fifth num: ");
    scanf("%d",&e);

    if (a>b && a>c && a>d && a>e)
    printf("%d is gretest number",a);

    else if (b>a && b>c && b>d && b>e)
    printf("%d is gretest number",b);

    else if(c>a && c>b && c>d && c>e)
    printf("%d id gretest number",c);

    else if(d>a && d>b && d>c && d>e)
    printf("%d is gretest number",d);

    else 
        printf("%d is gretest number",e);

        return 0;

}