#include<stdio.h>
int main()
{
    char LETTERS;
    printf("Enter the letter: ");
    scanf("%c",&LETTERS);

    switch(LETTERS)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'O':
        case 'U':
        case 'I':
        printf("Vowel");
        break;
        default: printf ("Consonant");            
                 break;   

    }
}