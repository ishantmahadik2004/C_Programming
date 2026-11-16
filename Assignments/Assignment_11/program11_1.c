/*Write a program which accept range from user and display all numbers between that range

    Input:  25  35
    Output: 25  26  27  28  29  30  31  32  33  34  35

    Input:  -10 2
    Output: -10 -9  -8  -7  -6  -5  -4  -3  -2  -1  0   1   2

    Input:  90  18
    Output: Invalid range
*/

#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;
    //Filter
    if(iStart > iEnd)
    {
        printf("Invalid Range\n");

        return;
    }
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
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

    RangeDisplay(iValue1, iValue2);

    return 0;
}