/*Write a program which accept range from user and display all numbers between that range in reverse order

    Input:  25  35
    Output: 35  34  33  32  31  30  29  28  27  26  25

    Input:  -10 2
    Output: 2   1   0   -1  -2  -3  -4  -5  -6  -7  -8  -9  -10

    Input:  90  18
    Output: Invalid range
*/

#include<stdio.h>

void RangeDisplayReverse(int iStart, int iEnd)
{
    int iCnt = 0;
    //Filter
    if(iStart > iEnd)
    {
        printf("Invalid Range\n");

        return;
    }
    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue1 =0, iValue2 = 0;

    printf("Enter starting range: ");
    scanf("%d",&iValue1);

    printf("Enter ending range: ");
    scanf("%d",&iValue2);

    RangeDisplayReverse(iValue1, iValue2);

    return 0;
}