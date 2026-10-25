//main file

#include"Header.h"
////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;  //variable convention name iValue

    printf("Enter 1st number: ");
    if(scanf("%d",&iValue1) != 1)
    {
        fprintf(stderr,"Unable to proceed as input is invald");

        return EXIT_FAILURE;
    }

    printf("Enter 2nd number: ");
    if(scanf("%d",&iValue2) != 1)
    {
        fprintf(stderr,"Unable to proceed as input is invalid");

        return EXIT_FAILURE;
    }

    iResult = Addition(iValue1, iValue2);

    printf("Addition is: %d\n",iResult);

    return EXIT_SUCCESS;
}
