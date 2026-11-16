/*Write a program which accept number from user and return count of even digits

    Input:  2395
    Output: 1

    Input:  1018
    Output: 2

    Input:  8462
    Output: 4
*/

#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iEven = 0;

    //Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iEven++;
        }
        iNo = iNo / 10;
    }
    return iEven;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("%d\n",iRet);

    return 0;
}