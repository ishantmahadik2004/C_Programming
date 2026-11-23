/*Write a program which displays ASCII table. Table contains symbol, decimal, hexadecimal and octal representation of every member
from 0-255
*/

#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("------------------------------------\n");
    printf("Symabol\tDecimal\tHexadecimal\tOctal\n");
    printf("------------------------------------\n");
    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        if((iCnt < 32) || (iCnt == 127))
        {
            printf("--\t%d\t0X%X\t\t0%o\n",iCnt, iCnt, iCnt);
        }
        else
        {
            printf("%c\t%d\t0X%X\t\t0%o\n",iCnt, iCnt, iCnt, iCnt);

        }
    }
}

int main()
{
    DisplayASCII();
    return 0;
}