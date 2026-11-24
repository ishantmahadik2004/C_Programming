/*Check whether number is divisible by 5 and 3 or not*/
//Other version of program85.c

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if((iNo % 3) == 0)
    {
        if((iNo % 5) == 0)
        {
            printf("%d is divisible by 3 and 5\n",iNo);
        }
        else
        {
            printf("%d is not divisible\n",iNo);
        }
    }
    else
    {
        printf("%d is not divisible by 3 and 5\n",iNo); 
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