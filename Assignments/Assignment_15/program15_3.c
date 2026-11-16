/*Write a program which accept two numbers and check whether numbers are equal or not

    Input:  10   10
    Output: Equal
    
    Input:  10  12
    Output: Not Equal

    Input:  10  -10
    Output: Not Equal
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Enter 1st number: ");
    scanf("%d",&iValue1);

    printf("Enter 2nd number: ");
    scanf("%d",&iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet == TRUE)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }

    return 0;
}