/*Write a program which returnns the difference between Even and Odd Factorial

    Input:  5
    Output: -7          (8-15)

    Input:  -5
    Output: -7          (8-15)

    Input:  10
    Output: 2895          (3840-945)
*/

#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1, iOddFact = 1;

    //Upadter
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iEvenFact *= iCnt;
        }
        else
        {
            iOddFact *= iCnt;
        }
    }

    return (iEvenFact - iOddFact);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is: %d\n",iRet);

    return EXIT_SUCCESS;
}