/*Write a program which accept string from user and return the difference between frequency of small characters and frequency
of capital characters

    Input:  "Marvellous"
    Output: 8                   (9-1)
*/

#include<stdio.h>

int Difference(char *str)
{
    int iCntCapital = 0, iCntSmall = 0;

    //Filter
    if(str == NULL)
    {
        return -1;
    }
    
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCntCapital++;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            iCntSmall++;
        }
        str++;
    }
    return (iCntSmall - iCntCapital);
}

int main()
{
    char arr[20];
    int iRet = 0;
    
    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);
    printf("%d\n",iRet);
    
    return 0;
}