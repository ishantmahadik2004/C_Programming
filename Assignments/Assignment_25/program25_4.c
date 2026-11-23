/*Accept character from user and check whether it is small case or not (a-z)

    Input:  a
    Output: TRUE

    Input:  C
    Output: FALSE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        return TRUE;
    }
    else if((ch >= 'A') && (ch <= 'Z'))
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
        printf("It is a small case character\n");
    }
    else
    {
        printf("It is not a small case character\n");
    }

    return 0;
}