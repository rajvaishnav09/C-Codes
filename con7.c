#include<stdio.h>
int main()
{
    int MONTH;
    printf("Enter the month name: ");
    scanf("%d",&MONTH);

    if (MONTH==1)
    printf("JANUARY");

    else if (MONTH==2)
    printf("FEB");

    else if(MONTH==3)
    printf("MARCH");

    else if (MONTH==4)
    printf("APRIL");
     
    else if (MONTH==5)
    printf("MAY");

    else if (MONTH==6)
    printf("JUNE");

    else if (MONTH==7)
    printf("JULY");

    else if (MONTH==8)
    printf("AUGUST");

    else if (MONTH==9)
    printf("SEP");

    else if (MONTH==10)
    printf("OCT");

    else if (MONTH==11)
    printf("NOV");

    else if (MONTH==12)
    printf("DEC");

    else 
    printf("You entered wrong number");

    return 0;

}