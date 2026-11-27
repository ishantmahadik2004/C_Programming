/*Accept N numbers from user and accept one number as NO, return the index of last occurence of that NO

    Input:  N:  6
            NO: 66
            Elements:   85  66  3   66  93  88
    Output: 3

    Input:  N:  6
            NO: 12
            Elements:   85  11  3   15  11  111
    Output: -1
*/
#include<stdio.h>
#include<stdlib.h>


int LastOcc(int arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iLastOccurence = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            iLastOccurence = iCnt;
        }
    }
    if(iLastOccurence != 0)
    {
        return iLastOccurence;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int * p = NULL;
    

    printf("Enter the number of elements: ");
    scanf("%d",&iSize);

    printf("Enter the number: ");
    scanf("%d",&iValue);

    p =(int *)malloc(sizeof(int) * iSize);

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ",(iCnt + 1));
        scanf("%d",&p[iCnt]);
    }
    
    iRet = LastOcc(p, iSize, iValue);

    if(iRet == -1)
    {
        printf("Number is not present");
    }
    else
    {
        printf("Last occurence of number is %d",iRet);
    }

    free(p);
    return 0;
}