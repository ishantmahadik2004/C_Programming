/*Accept N numbers from user and accept Range, Display all elements from that range

    Input:  N:      6
            Start:  60
            End:    90
            Elements:   85  66  3   76  93  88
    Output: 85  66  76  88

    Input:  N:      6
            Start:  30
            End:    50
            Elements:   85  11  3   15  11  111
    Output: 
*/
#include<stdio.h>
#include<stdlib.h>


void Range(int arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((arr[iCnt] > iStart) && (arr[iCnt] < iEnd) )
        {
            printf("%d\t",arr[iCnt]);
        }
    }
    
}

int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int * p = NULL;
    

    printf("Enter the number of elements: ");
    scanf("%d",&iSize);

    printf("Enter the starting point: ");
    scanf("%d",&iValue1);

    printf("Enter the ending point: ");
    scanf("%d",&iValue2);

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
    
    Range(p, iSize, iValue1, iValue2);

    free (p);
    
    return 0;
}