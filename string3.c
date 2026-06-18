#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int len;
    printf("Enter string: ");
    gets(str);

    len=strlen(str);
    printf("\nlen=%d",len);

    return 0;
}