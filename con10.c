#include<stdio.h>
int main()
{
    int ROLL,HINDI,ENGLISH,MATHS,SS,SCIENCE,TOTAL,PRES;

    printf("Enter the roll number: ");
    scanf("%d",&ROLL);

    printf("Enter the hindi marks: ");
    scanf("%d",&HINDI);

    printf("Enter the  english marks: ");
    scanf("%d",&ENGLISH);

    printf("Enter the  maths marks: ");
    scanf("%d",&MATHS);
    
    printf("Enter the  ss marks: ");
    scanf("%d",&SS);

    printf("Enter the  science marks: ");
    scanf("%d",&SCIENCE);
    
    TOTAL=HINDI+ENGLISH+MATHS+SS+SCIENCE;

    PRES=TOTAL/5;

    printf("The total marks:%d",TOTAL);
    printf("The Percentage:%d",PRES);
    
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
