#include<stdio.h>
int MUL(int a, int b)
{
    return(a*b);
}

int main()
{   int a,b,c;
    printf("Enter the value: ");
    scanf("%d",&a);

    printf("Enter the value: ");
    scanf("%d",&b);

    c=MUL(a,b);

    printf("\nThe multiplication is: %d",c);
}