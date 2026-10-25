/*
    Step1:  Understand the problem Statement
    Step2:  Write the algorithm
    Step3:  Select the programming language
    Step4:  Write the program
    Step5:  Test the program
*/


////////////////////////////////////////////////////////////////
//
//  Step1:  Understand the problem Statement
//          User is going to enter any 2 numbers
//          And we have to perform addition
//
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
//
//  Step2:  Write the algorithm
/*
    START
        Accept 1st number as no1
        Accept 2nd number as no2
        Create the variable as ans to store the result
        Perform the addition and into ans
        Display the result from ans
    END
*/
//
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
//
//  Step3:  Select the programming language
//          We select C programming
//
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
//
//  Step4:  Write the program
//
////////////////////////////////////////////////////////////////

#include<stdio.h>

int Addition(int iNo1, int iNo2)
{
    int iAns = 0;
    iAns = iNo1 + iNo2;            //business logic
    return iAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;  //variable convention name iValue

    printf("Enter 1st number: ");
    scanf("%d",&iValue1);

    printf("Enter 2nd number: ");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1, iValue2);

    printf("Addition is: %d\n",iResult);

    return 0;
}