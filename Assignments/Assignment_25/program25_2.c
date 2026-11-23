/*Accept character from user and check whether it is capital or not (A-Z)

    Input:  A
    Output: TRUE

    Input:  c
    Output: FALSE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        return TRUE;
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character: ");
    scanf("%c",&cValue);

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is a capital character\n");
    }
    else
    {
        printf("It is not a capital character\n");
    }

    return 0;
}