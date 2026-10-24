//Write c program that accepts integer from the user and determines whether the number entered is positive or negative
#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iNo)
{
    if(iNo >= 0)
    {
        printf("Number is positive");
    }
    else
    {
        printf("Number is negative");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}