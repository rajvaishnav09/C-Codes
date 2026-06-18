#include<stdio.h>
int main()
{
    int PERS;
    printf("Enter the your score: ");
    scanf("%d",&PERS);

    if(PERS>=90)
    {
    printf("You have got A+ grade");
    }
    else if (PERS>=80)
    {
    printf("You have got B+ grade");
    }
    else {
        printf("You have got B grade");
    }
    return 0;
    
}