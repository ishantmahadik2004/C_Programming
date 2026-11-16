/*Write a proggram which accepts three numbers and print its multiplication

    Input:  5   4   7
    Output: 140

    Input:  5   0   7
    Output: 35

    Input:  0   0   0
    Output: 0

    Input:  5   0   0
    Output: 5
*/

#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMul = 1;
    if((iNo1 == 0) && (iNo2 == 0) && (iNo3 == 0))
    {
        return 0;
    }
    else if(iNo1 != 0)
    {
        iMul *= iNo1;
    }
    if(iNo2 != 0)
    {
        iMul *= iNo2;
    }
    if(iNo3 != 0)
    {
        iMul *= iNo3;
    }
    return iMul;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Enter three numbers: ");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is: %d\n",iRet);

    return 0;
}