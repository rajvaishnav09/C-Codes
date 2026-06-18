#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="Ramesh";
    
    strupr(str1);

    printf("%s",str1);

    char str2[]="RAMESH";
    
    strlwr(str2);

    printf("\n%s",str2);

}
