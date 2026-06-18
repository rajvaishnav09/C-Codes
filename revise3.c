#include<stdio.h>
int main()
{
    int NUM;
    printf("Enter the number: ");
    scanf("%d",&NUM);

    if(NUM==1)
    printf("JANUARY");

    else if(NUM==2)
    printf("FEB");
    
    else if(NUM==3)
    printf("March");

    else if(NUM==4)
    printf("April");

    else if(NUM==5)
    printf("May");

    else if (NUM==6)
    printf("June");

    else if(NUM==7)
    printf("July");
    
    else if(NUM==8)
    printf("Agust");
    
    else if(NUM==9)
    printf("September");
    
    else if(NUM==10)
    printf("Octomber");

    else if(NUM==11)
    printf("November");

    else if(NUM==12)
    printf("December");

    else
        printf("Please enter 1 to 12 number!!");

}