/*Write a proggram to give factorial of a gievn number 

    Input:  5
    Output: 120     (5 * 4 * 3 * 2 * 1)

    Input:  -5
    Output: 120     (5 * 4 * 3 * 2 * 1)

    Input:  4
    Output: 24      ($ * 3 * 2 * 1)
*/

#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;

    //Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact *= iCnt;                      //iFact = iFact * iCnt
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of %d is %d\n",iValue,iRet);

    return EXIT_SUCCESS;
}