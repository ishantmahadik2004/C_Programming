//Factorial of n numbers

#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 0;  //wrong output
    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        iFact *= iCnt;                 //iFact = iFact * iCnt 
    }
    return iFact; //wrong output(always return 0)
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is: %d\n",iRet);

    return EXIT_SUCCESS;
}
