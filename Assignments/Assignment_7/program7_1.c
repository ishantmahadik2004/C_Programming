/*Write a program which accepts number from user and print that number of $ & * on screen*/

#include<stdio.h>
#include<stdlib.h>

void DisplayPattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    DisplayPattern(iValue);

    return EXIT_SUCCESS;
}