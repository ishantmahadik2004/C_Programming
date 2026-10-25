#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];
    int iAge = 0;
    float fMarks = 0.0f;
    
    printf("Enter your name: ");
    scanf("%[^'\n']s",sName);      //Enter remains in input buffer

    printf("Enter your Age: ");
    scanf("%d",&iAge);

    printf("Enter your Marks: ");
    scanf("%f",&fMarks);

    printf("Welcome %s\n",sName);
    printf("Your Age is: %i\n",iAge);
    printf("Your Marks are: %f\n",fMarks);

    return EXIT_SUCCESS;
}