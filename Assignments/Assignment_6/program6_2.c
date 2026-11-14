/*A student is eligible for admission if the student's marks are atleast 60 and age is atleast 17 years.
Accept both values and determine eligibility.Negative age or marks outside 0-100 must be terated as invalid input

    Input:      75 18
    Output:     Eligible for admission
    
    Input:      55 19
    Output:     Not eligible

    Input:      80 16
    Output:     Not eligible
*/
#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
    //Filter
    if((iAge <=0 ) || (fMarks < 0.0f) || (fMarks > 100.f))
    {
        printf("Invalid input\n");

        return;
    }
    else if((iAge >= 17) && (fMarks >= 60))
    {
        printf("Eligible for admission\n");
    }
    else
    {
        printf("Not eligible\n");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age: ");
    scanf("%f %d",&fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}