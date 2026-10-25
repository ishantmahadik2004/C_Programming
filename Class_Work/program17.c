#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    if((iValue % 2) == 0)
    {
        printf("It is even number");
    }
    else
    {
        printf("It is odd number");
    }

    return EXIT_SUCCESS;

}