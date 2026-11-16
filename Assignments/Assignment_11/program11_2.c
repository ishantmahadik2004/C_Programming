/*Write a program which accept range from user and display all even numbers between that range

    Input:  25  35
    Output: 26  28  30  32  34

    Input:  -10 2
    Output: -10 -8  -6  -4  -2  0   2

    Input:  90  18
    Output: Invalid range
*/

#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
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
        if((iCnt % 2) == 0)
        {
            printf("%d\t",iCnt);
        }
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

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}