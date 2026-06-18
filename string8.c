#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int i=0;
    printf("Enter the name: ");
    scanf("%s",str);

    while (str[i]!='\0')
    {
        i++;       
    }
    

    printf("%d",i);
    return 0;
}