/*Write a program which accept string from user and only digits from string

    Input:  "Marvellous89Multi121OS"
    Output: 89121

    Input:  "Demo"
    Output: 
*/

#include<stdio.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c",*str);
        }
        else
        {
            printf("");
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    return 0;
}