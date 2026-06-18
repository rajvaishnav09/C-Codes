#include<stdio.h>

int main()
{
    int a;
    printf("Enter Value = ");
    scanf("%d",&a);

    if(a>=10)
    {
        printf("\nGreater");
    }
    else
    {
        printf("\nSmaller");
    }

    printf("\n\nOutside");

    return 0;
}