/*Accept character from user. If character is capital display all the characters from the input character till Z. If input
character is small then prrint all the characters inreverse order till a. In other cases return directly,

    Input:  Q
    Output: Q   R   S   T   U   V   W   X   Y   Z

    Input:  m
    Output: m   l   k   j   i   h   g   f   e   d   c   b   a

    Input:  4
    Output: 
*/

#include<stdio.h>

void Display(char ch)
{
    char iCnt = '\0';
    if((ch >= 'A') && (ch <= 'Z'))
    {
        for(iCnt = ch; iCnt <= 'Z'; iCnt++)
        {
            printf("%c\t",iCnt);
        }
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        for(iCnt = ch; iCnt >= 'a'; iCnt--)
        {
            printf("%c\t",iCnt);
        }
    }
    else
    {
        return;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}