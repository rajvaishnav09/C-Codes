#include<stdio.h>

int main()
{
    int a;
    printf("Enter Value = ");
    scanf("%d",&a);

    switch (a)
    {
        case 21: printf("First");
                break;
        case 23: printf("Second");
                break;
        case 3: printf("Third");
                break;
        default: printf("Default Case");
    }


    return 0;
}