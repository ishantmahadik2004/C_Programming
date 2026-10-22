/*Accept one character from user and convert case of that character
Case1   Input: a
        Output: A

Case2   Input: h
        Output: H
*/
#include<stdio.h>

void DisplayCharacter(char CValue)
{
    if(CValue >= 'a' && CValue <= 'z')
    {
        printf("%c",CValue - 32);
    }
    else if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c",CValue + 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character: ");
    scanf("%c",&cValue);

    DisplayCharacter(cValue);

    return 0;
}