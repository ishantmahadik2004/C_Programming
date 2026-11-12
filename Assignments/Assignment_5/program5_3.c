/*Accept the marks of a student out of 100 and display accordingly
    90-100  =   A
    75-89   =   B
    60-74   =   C
    40-59   =   D
    Below   =   Fail
If marks are outside 0-100 then input is invalid
*/

#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(float fMarks)
{
    //Filter
    if((fMarks > 100) || (fMarks < 0))
    {
        printf("Invalid Input\n");
        return;
    }
    else if(fMarks >= 90)
    {
        printf("A\n");
    }
    else if(fMarks >= 75)
    {
        printf("B\n");
    }
    else if(fMarks >= 60)
    {
        printf("C\n");
    }
    else if(fMarks >= 40)
    {
        printf("D\n");
    }
    else
    {
        printf("Fail\n");
    }
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter marks: ");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}