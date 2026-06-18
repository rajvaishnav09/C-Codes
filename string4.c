#include<stdio.h>
#include<string.h>
int main()
{
    char name[5][30];
    int i;

   for(i=0; i<5; i++)
   {
        printf("Enter the name: ");
        gets(name[i]);

   }
   for(i=0; i<5; i++)
   {
    printf("\nThe first character is: %c",name[i][0]);

   }
   return 0;


}