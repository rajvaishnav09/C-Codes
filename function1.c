#include<stdio.h>
int Mul(int a,int b)
{
    return(a*b);
}

int main()
{
    int a,b,c;
    printf("Enter number: ");
    scanf("%d",&a);

    printf("Enter number second: ");
    scanf("%d",&b);

    c=Mul(a,b);

    printf("The multiplication is: %d",c);


}