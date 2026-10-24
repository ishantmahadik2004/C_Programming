/*Accept the age of a person and determine whether the person is eligible to vote.
A person must be at least 18 years old to vote. A negative age should be considered invalid*/
#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if(iAge < 0)
    {
        printf("Invalid Age");

        return;
    }
    else if(iAge >= 18)
    {
        printf("Eligible for voting\n");
    }
    else
    {
        printf("Not eligible for voting\n");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter your age: ");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}
