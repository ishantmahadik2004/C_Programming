/*Write a program which accept total marks and obtained marks from user and calculate percentage

    Input:  1000    745
    Output: 74.5%

    Input:  745     1000
    Output: Invalid Input
*/

#include<stdio.h>

float Percentage(int iTotal, int iObtained)
{
    float fPercentage = 0.0f;

    //Filter
    if(iObtained > iTotal)
    {
        return -1.0;
    }

    fPercentage = ((float)iObtained / (float)iTotal) * 100;

    return fPercentage;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Enter total marks: ");
    scanf("%d",&iValue1);

    printf("Enter obtained marks: ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1, iValue2);

    if(fRet == -1.0)
    {
        printf("Invalid input\n");
    }
    else
    {
        printf("Percentage: %.2f\n",fRet);
    }

    return 0;
}