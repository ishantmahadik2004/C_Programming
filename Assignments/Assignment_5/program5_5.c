/*Accept a single character from user and determine whether it is a uppercase, lowercase alphabet, digit, or special character.
Use character comparison without using library character classification functions*/

#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cValue)
{
    if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("Lowercase alphabet\n");
    }
    else if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("Uppercase alphabet\n");
    }
    else if((cValue >= '0') && (cValue <= '9'))
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special Character\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character: ");
    scanf("%c",&cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}