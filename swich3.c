#include<stdio.h>
int main()
{
    int choise,num1,num2,ADD,MUL,SUB;
    float DIVE;

    printf("Enter your choise: ");
    scanf("%d",&choise);

    switch (choise)
    {case 1: 
        printf("Enter the num first: ");
            scanf("%d",&num1);
        printf("Enter the num second: ");
            scanf("%d",&num2);
        ADD=num1+num2;
        printf("The sum is: %d",ADD);
        break;
    
    case 2: 
        printf("Enter the num first: ");
        scanf("%d",&num1);
        printf("Enter the second num: ");
        scanf("%d",&num2);
        MUL=num1*num2;
        printf("The multiplication is: %d",MUL);
        break;


    case 3:
        printf("Enter the first num: ");
        scanf("%d",&num1);
        printf("Enter the second num: ");
        scanf("%d",&num2);
        SUB=num1-num2;
        printf("The ans is: %d",SUB);
        break;

    case 4:
        printf("Enter the first num: ");
        scanf("%f",&num1);
        printf("Enter the second num: ");
        scanf("%f",&num2);
        DIVE=num1/num2;
        printf("The divisan is:%.2f",DIVE);
        break;
         
        

        default: printf("You entered wrong value!!");
    }

        return 0;



    
    }