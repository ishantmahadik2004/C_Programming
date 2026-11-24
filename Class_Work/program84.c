/*Check whether number is divisible by 5 or not*/

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if((iNo % 5) == 0)
    {
        printf("%d is divisible by 5\n",iNo);
    }
    else
    {
        printf("%d is not divisible by 5\n",iNo); 
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}