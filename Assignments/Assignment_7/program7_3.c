/*Write a program whcih accpet number from user and print its numbers line

    Input:  5
    Output: -5  -4  -3  -2  -1  0   1   2   3   4   5
*/

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}