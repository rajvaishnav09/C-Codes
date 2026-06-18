#include<stdio.h>
int main()
{
    char LETTER;
    printf("Enter the letter: ");
    scanf("%c",&LETTER);

    if (LETTER=='a' && LETTER=='e' && LETTER=='i' && LETTER=='o' &&LETTER=='u' && LETTER=='A' && LETTER=='E' && LETTER=='I' && LETTER=='O' &&  LETTER=='U')
    printf("This is vowel");

    else
        printf("This is consonant");
    return 0;
}