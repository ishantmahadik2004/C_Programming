//Accept number from user and print the number of * on screen
#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("* ");
    }
}

int main()
{
    int iValue = 0;
    
    
    printf("Enter number of stars to be printed: ");
    scanf("%d",&iValue);

    Accept(iValue);

    return 0;
}