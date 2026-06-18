#include<stdio.h>
int main()
{
    int ROLL;
    int SUB1,SUB2,SUB3;
    int TOTAL;
    float PRESENTEGE;
    printf("enter the rolll num: ");
    scanf("%d",&ROLL);

    printf("enter the sub marks: ");
    scanf("%d%d%d",&SUB1,&SUB2,&SUB3);

    TOTAL=SUB1+SUB2+SUB3;

    printf("\nRoll NUMBER----%d",ROLL);
    printf("\ntotal is%d",TOTAL);
    printf("presentege is %f",PRESENTEGE);

    return 0;

}