/*Accept an integer and determine whether it is divisible by 3 and 5 both, only by3, only by 5 or neither

    Input:  15
    Output: Divisible by both

    Input:  9
    Output: Divisible by 3 only

    Input:  10
    Output: Divisible by 5 only

    Input:  7
    Outptu: Not divisible by either
*/

#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int iNo)
{
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
    {
        printf("Divisible by both\n");
    }
    else if((iNo % 3) == 0)
    {
        printf("Divisible by 3 only\n");
    }
    else if((iNo % 5) == 0)
    {
        printf("Divisible by 5 only\n");
    }
    else
    {
        printf("Neither divisible by 3 nor by 5");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}