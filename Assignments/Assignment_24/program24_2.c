/*Write a program which accept a string from user and accept a cahracter. Return the frequency of that character

    Input:  "Marvellous Multi OS"
            M
    Output: 2

    Input:  "Marvellous Multi OS"
            w
    Output: 0
*/

#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iFrequency = 0;
    while(*str != 0)
    {
        if(*str == ch)
        {
            iFrequency++;
        }
        str++;
    }
    return iFrequency;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    printf("Enter the character: ");
    scanf(" %c",&cValue);

    iRet = CountChar(arr, cValue);
    printf("Character frequency is: %d\n",iRet);

    return 0;
}