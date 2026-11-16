/*Write a program which accept number from user and display its multiplication of factors

    Input:  12
    Output: 144         (1 * 2 * 3 * 4 * 6)

    Input:  13
    Output: 1           (1)

    Input:  10
    Output: 10          (1 * 2 * 5)
*/

#include<stdio.h>

int MulFact(int iNo)
{
    int iCnt = 0;
    int iMul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMul *= iCnt;           //iMul = iMul * iCnt;
        }
    }
    return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = MulFact(iValue);

    printf("%d\n",iRet);

    return 0;
}