#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>


struct Member {
    
    char Name[30];
    int Age;
    int GuessNumber;
};

int main()
{
    struct Member m1;
    int LuckyNumber;

    printf("Enter your name: ");
    gets(m1.Name);

    printf("Enter your age: ");
    scanf("%d",&m1.Age);

    if(m1.Age<16)
    {
        printf("Sorry you don't apply for coopon!!!");

        return 0;
    }

    printf("Enter your Lucky number: ");
    scanf("%d",&m1.GuessNumber);

    srand(time(0));
    LuckyNumber = (rand()) %10 +1;

    printf("---------------------------------------\n");

    printf("Member name: %s\n",m1.Name);
    printf("Age of Member: %d\n",m1.Age);
    printf("Your Geuss number: %d\n",m1.GuessNumber);

    if(LuckyNumber==m1.GuessNumber)
    {
       printf("\033[1;32m🎉 CONGRATULATIONS! You guessed the Lucky Number (%d)!\033[0m\n", LuckyNumber);
        printf("\033[1;32mYou have WON a FREE Gym Membership Coupon!\033[0m\n");
        printf("\033[1;32mCoupon Code: GYM-FREE-%d%d\n", m1.GuessNumber, m1.Age);
    }

    else
    printf("\033[1;33mSorry %s, the Lucky Number was %d. Better luck next time!\033[0m\n", m1.Name, LuckyNumber);
        printf("You can still join with our standard membership plans.\n");
    
        return 0;
}
