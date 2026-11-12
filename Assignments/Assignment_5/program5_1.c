/*Accept three integers from user and determine the greatest number among them.

    Input:  10  40  30  =   40
    Input:  40  40  20  =   40
    Input:  15  15  15  =   15

*/

#include<stdio.h>
#include<stdlib.h>

void FindGreat(int iFirst, int iSecond, int iThird)
{
    if((iFirst >= iSecond) && (iFirst >= iThird))
    {
        printf("%d is greater\n",iFirst);
    }
    else if((iSecond >= iFirst) && (iSecond >= iThird))
    {
        printf("%d is greater\n",iSecond);
    }
    else if((iThird >= iFirst) && (iThird >= iSecond))
    {
        printf("%d is greater\n",iThird);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter all three numbers: ");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    FindGreat(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}