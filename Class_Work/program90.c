/*Same as program 80*/

#include<stdio.h>
#include<stdlib.h>

int Summation(int iNo)
{
    int iCnt = 0, iSum = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum += iCnt;    //iSum = iSum + iCnt
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = Summation(iValue);
    printf("Summation is: %d\n",iRet);

    return EXIT_SUCCESS;
}