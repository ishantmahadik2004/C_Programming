/*Write a program which accept number from user and return count of even digits between 3 and 7

    Input:  2395
    Output: 1

    Input:  1018
    Output: 0

    Input:  8462
    Output: 2
*/

#include<stdio.h>

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    //Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit > 3) && (iDigit < 7))
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("%d\n",iRet);

    return 0;
}