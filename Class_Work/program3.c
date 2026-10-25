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

int main()
{
    int iValue1=10, iValue2=11, iResult=0;  //variable convention name iValue

    iResult = iValue1 + iValue2;            //business logic

    printf("%d\n",iResult);

    return 0;
}