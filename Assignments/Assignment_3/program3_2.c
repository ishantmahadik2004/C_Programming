/*Write a program which accept number from user print even factors of that number

Case1   Input: 24
        Output: 2 4 6 8 12
*/
#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            if((iCnt % 2) == 0)
            {
                printf("%d ",iCnt);
            }
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}