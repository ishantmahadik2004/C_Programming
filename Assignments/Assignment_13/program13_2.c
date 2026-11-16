/*Write a program which accept number from user and return count of odd digits

    Input:  2395
    Output: 3

    Input:  1018
    Output: 2

    Input:  8462
    Output: 0
*/

#include<stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iOdd = 0;

    //Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) != 0)
        {
            iOdd++;
        }
        iNo = iNo / 10;
    }
    return iOdd;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("%d\n",iRet);

    return 0;
}