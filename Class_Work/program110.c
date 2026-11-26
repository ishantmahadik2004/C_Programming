//Check whether number is prime or not
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 2; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum += iCnt;
        }
    }
    if(iSum == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number: ");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);
    
    if(bRet)
    {
        printf("Number is prime\n");
    }
    else
    {
        printf("Number is not a prime number\n");
    }

    return EXIT_SUCCESS;
}