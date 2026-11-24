/*Check whether number is divisible by 5 and 3 or not

    ------------------------------------
                Operation &&
    ------------------------------------
    Result1     Result2     Final Result
    ------------------------------------
    TRUE        TRUE        TRUE
    TRUE        FALSE       FALSE
    FALSE       TRUE        FALSE           //Short Circuit
    FALSE       FALSE       FALSE           //Short Circuit
    ------------------------------------


*/

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
    {
        printf("%d is divisible by 3 and 5\n",iNo);
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