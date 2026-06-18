#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int i;
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
            
        }
        printf("%c",str[i]);
    }
    return 0;
}