/*Acccept the total purchase and calculate the final payable amount after applying the following discount.
Negative purchase amounts are invalid

    Below 1000 rupees           Dicount: 0%
    1000 to below 5000 rupees   Dicount: 10%
    5000 rupees and above       Dicount: 20%

    Input:  800      Payable Amount: 800.00
    Input:  2000     Payable Amount: 1800.00
    Input:  6000     Payable Amount: 4800.00
    
*/
#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    //Filter
    if(fAmount <= 0)
    {
        printf("Invalid input\n");

        return;
    }
    else if(fAmount < 1000)
    {
        printf("Payable Amount: %.2f\n",fAmount);
    }
    else if((fAmount >= 1000) && (fAmount < 5000))
    {
        fDiscount = (fAmount * 10) / 100;
        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount: %.2f\n",fFinalAmount);
    }
    else
    {
        fDiscount = (fAmount * 20) / 100;
        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount: %.2f\n",fFinalAmount);
    }
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}