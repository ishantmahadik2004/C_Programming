/*Write a program which accept range from user and return additon of all even numbers between that range. 
(Range should contain only +ve numbers)

    Input:  23  30
    Output: 108

    Input:  10  18
    Output: 70

    Input:  -10 2
    Output: Invalid range
*/

#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;
    //Filter
    if((iStart < 0) || (iEnd < 0) || (iStart > iEnd))
    {
        return -1;
    }
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iSum += iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue1 =0, iValue2 = 0;
    int iRet = 0;

    printf("Enter starting range: ");
    scanf("%d",&iValue1);

    printf("Enter ending range: ");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid Range\n");
    }
    else
    {
        printf("Addition of range is: %d\n",iRet);
    }

    return 0;
}