#include<stdio.h>
int main()
{
    int DAY;
    printf("Enter the day: ");
    scanf("%d",&DAY);

    if (DAY==1 )
    printf("Monday");

    else if (DAY==2)
    printf("Tuseday");

    else if (DAY==3)
    printf("wendusday");

    else if(DAY==4)
    printf("Thirsday");

    else if (DAY==5)
    printf("Friday");

    else if(DAY==6)
    printf("Saturday");

    else if(DAY==7)
    printf("Sunday");

    else
        printf("you entered invalide input");

        return 0;
}



