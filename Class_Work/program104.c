// Accept number from user and check whether it is perfecct or not

#include<stdio.h>
#include<stdlib.h>

void CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo/2 ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum += iCnt;
        }
    }
    if(iSum == iNo)
    {
        printf("It is perfect number");
    }
    else
    {
        printf("It is not a perfect number");
    }

}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);

    CheckPerfect(iValue);

    return EXIT_SUCCESS;
}

//Time Complexity: O(N/2)