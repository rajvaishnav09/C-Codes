#include<stdio.h>
int main()
{
    int n,t,r;
    printf("Enter the number: ");
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        printf("%d",r);

        n=n/10;

    }

    if (t==r)
        printf("paniin");

        else
        printf("not");

        return 0;
}