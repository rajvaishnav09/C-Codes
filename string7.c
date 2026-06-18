#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int  len;
    printf("Enter your name: ");
    gets(str);

    len=strlen(str);

    printf("The len is: %d",len);

    return 0;

    

}