/*Accept N numebrs from user and return frequency of 11

    Input:  N:          6
            Elements:   85  66  3   80  93  88
    Output: 0

    Input:  N:          6
            Elements:   85  11  3   80  93  11
    Output: 2
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int arr[], int iLength)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(arr[iCnt] == 11)
        {
            iCount++;
        }
    }
    return iCount;
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
    printf("Frequency of 11 is: %d",iRet);

    free(ptr);

    return 0;
}