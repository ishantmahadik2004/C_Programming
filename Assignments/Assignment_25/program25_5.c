/*Accept division of student from user and depending on division display exam timing.
There are 4 division in the school A,B,C,D. Exam fo division A: 7am, B: 8:30am, C: 9:20am, D: 10:30am
(Application must be case insensitive)

    Input:  C
    Output: Your exam is at 9:20 am

    Input:  d
    Output: Your exam is at 10:30 am
*/

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if((chDiv == 'A') || (chDiv == 'a'))
    {
        printf("Your exam is at 7 am\n");
    }
    else if((chDiv == 'B') || (chDiv == 'b'))
    {
        printf("Your exam is at 8:30 am\n");
    }
    else if((chDiv == 'C') || (chDiv == 'c'))
    {
        printf("Your exam is at 9:20 am\n");
    }
    else if((chDiv == 'D') || (chDiv == 'd'))
    {
        printf("Your exam is at 10:30 am\n");
    }
    else
    {
        printf("Invalid Input");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter division: ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}