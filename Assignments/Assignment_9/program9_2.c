/*Accept amount in US Dollar and return its corresponding value in Indian rupee. Consider 1$ = 70 rupees

    Input:  10
    Output: 700

    Input:  3
    Output: 210

    Input:  1200
    Output: 84000
*/
#include<stdio.h>
#include<stdlib.h>

int DollarToINR(int iNo)
{
    int iAns = 0;

    iAns = iNo * 70;

    return iAns;
}

int main()
{
    int iValue =  0;
    int iRet = 0;

    printf("Enter number in USD: ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d\n",iRet);
    return EXIT_SUCCESS;
}