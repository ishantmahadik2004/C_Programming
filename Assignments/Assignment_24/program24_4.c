/*Write a program which accept a string from user and accept a cahracter. Return index of last occurence of that character

    Input:  "Marvellous Multi OS"
            M
    Output: 11

    Input:  "Marvellous Multi OS"
            w
    Output: -1

    Input:  "Marvellous Multi OS"
            e
    Output: 4
*/

#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iIndex = 0;
    int iLastOccurence = 0;
    while(*str != 0)
    {
        if(*str == ch)
        {
            iLastOccurence = iIndex;
            iIndex++;
        }
        else
        {
            iIndex++;
        }
        str++;
    }
    if(iLastOccurence == 0)
    {
        return -1;
    }
    else
    {
        return iLastOccurence;
    }
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

    iRet = LastChar(arr, cValue);
    printf("Character location is: %d\n",iRet);
    
    return 0;
}