#include<stdio.h>
int main()
{
    int ROLL,SUB1,SUB2,SUB3,SUB4,SUB5,TOTAL,PRES;

    printf("Enter the roll number: ");
    scanf("%d",&ROLL);

    printf("Enter the Hindi marks: ");
    scanf("%d",&SUB1);

    printf("Enter the  English marks: ");
    scanf("%d",&SUB2);

    printf("Enter the  Maths marks: ");
    scanf("%d",&SUB3);
    
    printf("Enter the  SS marks: ");
    scanf("%d",&SUB4);

    printf("Enter the  Science marks: ");
    scanf("%d",&SUB5);
    
    TOTAL=SUB1+SUB2+SUB3+SUB4+SUB5;

    PRES=TOTAL/5;

    printf("The total marks:%d",TOTAL);
    printf("\nThe Percentage:%d",PRES);
    
    if (PRES>=90)
        printf("\nYou got A grade");
    
    else if (PRES>=80)
        printf("\n\nYou got B grade");

    else if(PRES>=70)
        printf("\nYou got C grade");

    else if(PRES>=60)
        printf("\nYou got D grade");
        
    else 
        printf("\nYou got E grade");    

}
