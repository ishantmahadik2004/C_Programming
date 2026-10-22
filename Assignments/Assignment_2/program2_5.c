//Accept the number from user and check whether the number is even or odd
#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
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
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == TRUE)
    {
        printf("%d is Even number",iValue);
    }
    else
    {
        printf("%d is Odd number",iValue);
    }

    return 0;
}