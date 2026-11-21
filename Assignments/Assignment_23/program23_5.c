/*Write a program which accept string from user and count number of whitespaces

    Input:  "Marvellous"
    Output; 0

    Input:  "Marvellous Infosystems"
    Output: 1

    Input:  "Ishant Arun Mahadik"
    Output: 2
*/

#include<stdio.h>

int CountWhite(char *str)
{
    int iCount = 0;
    while( *str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("Number of whitespaces are: %d\n",iRet);

    return 0;
}