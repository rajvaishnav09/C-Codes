#include<stdio.h>
int main()
{
    int i, j;
    for(i=1; i<=8; i++)
    {
        // Print spaces
        for(j=1; j<=8-i; j++)
        {
            printf(" ");
        }

        // Print stars with spaces
        for(j=1; j<=i; j++)
        {
            printf(" *");
        }

        printf("\n"); // Move to next line
    }
    return 0;
}
