/*Write a program whhich accept  a string from user and display it in reverse order

    Input:  "Marvellous"
    Output: soullevraM
*/

#include<stdio.h>
#include<string.h>

void Reverse(char *str)
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

    Reverse(arr);

    return 0;
}