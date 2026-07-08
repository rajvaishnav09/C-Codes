#include<stdio.h>
#include<string.h>

struct Bankaccount
{
    int Accountno;
    char Holder;
    float Balance;
    int a;
};

int main()
{
    struct Bankaccount b;

    printf("Enter the account number: ");
    scanf("%d",&b.Accountno);

    if(b.Accountno==882985)
    {
        printf("Account Holder:\n Raj Vaishnav");
        printf("\nAccount Balance: 1022356986");

    
    }

    else
    {
        printf("Please Enter valid acount number.Thank you!!");
    }

    

}
