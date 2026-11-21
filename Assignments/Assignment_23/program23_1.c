/*Write a program which accept string from user and convert it into lower case

    Input:  "Marvellous Multi OS"


    Output: "marvellous multi os"
*/

#include<stdio.h>

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            printf("%c",(*str + 32));
        }
        else
        {
            printf("%c",*str);
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);

    return 0;
}