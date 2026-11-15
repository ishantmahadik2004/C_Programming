/*Write a program to find odd factorial of a given number

    Input:  5
    Output: 15       (5 * 3)

    Input:  -5
    Output: 15       (5 * 3)  

    Input:  10
    Output: 945       (9  *   7   *   5   *   3   *   1)
*/
#include<stdio.h>
#include<stdlib.h>

int OddFactorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;

    //Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt += 2)
    {
        // if((iCnt % 2) != 0)
        // {
        //     iFact *= iCnt;                  //iFact = iFact * iCnt
        // }

        iFact *= iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is: %d\n",iRet);

    return EXIT_SUCCESS;
}