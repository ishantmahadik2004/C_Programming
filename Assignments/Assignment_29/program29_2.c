/*Accept N numebrs from user and return difference between frequency of even numbers and odd numbers

    Input:  N:          7
            Elements:   85  66  3   80  93  88  90
    Output: 1           (4-3)
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int arr[], int iLength)
{
    int iCnt = 0, iCountEven = 0, iCountOdd = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((arr[iCnt] % 2) == 0)
        {
            iCountEven++;
        }
        else
        {
            iCountOdd++;
        }
    }
    return (iCountEven - iCountOdd);
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(NULL == ptr)
    {
        printf("Error: Unable to  allocate memory");

        return -1;
    }

    printf("Enter elements \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Frequency(ptr, iSize);
    printf("%d",iRet);

    free(ptr);

    return 0;
}