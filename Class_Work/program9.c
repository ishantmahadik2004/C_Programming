#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
//
//  Function Name   :   Addition
//  Input           :   Integer, Integer
//  Output          :   Integer
//  Description     :   Performs Addition 
//  Date            :   04/10/2026
//  Author          :   Ishant Arun Mahadik
//
////////////////////////////////////////////////////////////////

int Addition(
                int iNo1,   //First input
                int iNo2    //Second input
            )
{
    int iAns = 0;
    iAns = iNo1 + iNo2;            //business logic
    return iAns;
}

////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;  //variable convention name iValue

    printf("Enter 1st number: ");
    scanf("%d",&iValue1);

    printf("Enter 2nd number: ");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1, iValue2);

    printf("Addition is: %d\n",iResult);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////
//
//  Step5:  Test the program
//
//  Tested test cases
//---------------------------------------------------
//  Input1      Input2      Output
//---------------------------------------------------
//  10          11          21
//  11          0           11
//  0           11          11
//  20          -9          11
//  -9          20          11
//  -20         -11         -31
//---------------------------------------------------
//
////////////////////////////////////////////////////////////////
