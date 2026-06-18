#include<stdio.h>
int main()
{
    int i,n,mul=1;
    printf("How many  values: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
{
    mul=mul*i;

}

    printf("Mul is: %d",mul);

    return 0;
}