/*Accept a year and determine whether it is a leap year.A year is leap year if it is divisible by 400 or 
divisible by 4 but not by 100. Consider years less than or equal to zero invalid

    Input:  2024
    Output: Leap Year

    Input:  1900
    Output: Not a leap Year

    Input:  2000
    Output: Leap Year
*/

#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    //Filter
    if(iYear <= 0)
    {
        printf("Invalid Year\n");
        return ;
    }
    else if(((iYear % 400) == 0) || (((iYear % 4) == 0) && ((iYear % 100) != 0)))
    {
        printf("%d is a leap year\n",iYear);
    }
    else
    {
        printf("%d not a leap year\n",iYear);
    }
}

int main()
{
    int iYear = 0;

    printf("Enter year: ");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}