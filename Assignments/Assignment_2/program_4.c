/*Accept two numbers from user and display 1st number in 2nd number of times

Case1   Input: 12 5
        Output: 12 12 12 12 12

Case2   Input: -2 3
        Output: -2 -2 -2

Case3   Input: 21 -3
        Output: 21 21 21

Case4   Input: -2 0
        Output: 
*/
#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    //Updater
    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d ",iNo);
    }
}

int main()
{
    int iValue = 0, iCount = 0;

    printf("Enter the number you want to display: ");
    scanf("%d",&iValue);

    printf("Enter frequency: ");
    scanf("%d",&iCount);

    Display(iValue, iCount);

    return 0;
}