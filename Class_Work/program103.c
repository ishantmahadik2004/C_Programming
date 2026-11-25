// Sum of factors of a number

#include<stdio.h>
#include<stdlib.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo/2 ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum += iCnt;
        }
    }
    return iSum;

}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);
    printf("Summation of Factors is: %d\n", iRet);

    return EXIT_SUCCESS;
}

//Time Complexity: O(N/2)