/*Accept N numebrs from user and check whether that numbers contain 11 in it or not

    Input:  N:          6
            Elements:   85  66  3   80  93  88
    Output: 11 is absent

    Input:  N:          6
            Elements:   85  11  3   80  93  88
    Output: 11 is present
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int arr[], int iLength)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
       if(arr[iCnt] == 11)
       {
            bFlag = true;
            break;
       }
    }
    return bFlag;
}

int main()
{
    int iSize = 0, iCnt = 0;
    bool bRet = false;
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

    bRet = Check(ptr, iSize);
    if(bRet == true)
    {
        printf("11 is present \n");
    }
    else
    {
        printf("11 is absent \n");
    }

    free(ptr);

    return 0;
}