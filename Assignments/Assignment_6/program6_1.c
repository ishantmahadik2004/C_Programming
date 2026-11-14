/*Accept the number of electricity units consumed and calculate the total bill using the following 
slab-wise rates.

    First 100 units:    5 rupee per unit
    Next 100 units:     7 rupee per unit
    Above 200 units:    10 rupees per unit

    Input:  80
    Output: 400

    Input:  150
    Output: 850

    Input:  250
    Output: 1700
*/
#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fbill = 0.0f;

    if(iUnits <= 100)
    {
        fbill = iUnits * 5;
    }
    else if(iUnits <= 200)
    {
        fbill = ((iUnits - 100) * 7) + (100 * 5);
    }
    else
    {
        fbill = ((iUnits - 200) * 10) + (100 * 7) + (100 * 5);
    }

    printf("Your electricity bill is: %.2f\n",fbill);
}

int main()
{
    int iUnits = 0;

    printf("Enter consumed units: ");
    scanf("%d",&iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}