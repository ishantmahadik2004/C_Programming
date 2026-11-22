/*Write a program whcih accept string from user and reverse that string in place

    Input:  "abcd"
    Output: "dcba"

    Input:  "abba"
    Output: "abba"
*/

#include<stdio.h>
#include<string.h>

void StrRevX(char *str)
{
    int iIndex = 0;
    iIndex = strlen(str) - 1;

    while(iIndex >= 0)
    {
        printf("%c",str[iIndex]);
        iIndex--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);
    return 0;
}