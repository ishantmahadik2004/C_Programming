/*Write a program which accept number from user and return multiplication of all non-zero digits

    Input:  2395
    Output: 270

    Input:  1018
    Output: 8

    Input:  9440
    Output: 144
*/

#include<stdio.h>

int MulDigits(int iNo)
{
    int iDigit = 0;
    int iMul = 1;

    //Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
            iMul *= iDigit;         //iMul = iMul * iDigit
        }
        iNo = iNo / 10;
    }
    return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = MulDigits(iValue);

    printf("%d\n",iRet);

    return 0;
}