/*Write a program which accept temperature in Fahrenheit and convert it into celcius. (1 celcius = (Farenheit - 32) *(5/9))

    Input:  10
    Output: -12.2222        (10-32) * (5/9)

    Input:  34
    Output: 1.11111         (34-32) * (5/9)
*/
#include<stdio.h>
#include<Stdlib.h>

double FhtoCs(float fTemp)
{
    double dCelcius = 0.0;

    dCelcius = (fTemp - 32) * (5.0 / 9.0);

    return dCelcius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Farenheit: ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in celcius is: %lf\n",dRet);

    return EXIT_SUCCESS;
}