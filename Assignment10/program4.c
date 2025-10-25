//4. Write a program which accept temperature in Fahrenheit and convert in intp celsius.
// 1 Celcius = (Farenheit-32)*(5/9)
#include<stdio.h>

double FhtoCs(float Temp)
{
    double dCel = 0.0;
    dCel =(double) (Temp-32)*(5.0/9.0);

    return dCel;
}
//Time Complexity: O(1)
int main()
{
    float fValue =  0.0;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit: ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);
    printf("%f Fahrenhrit is %f Celsius", fValue, dRet);

    return 0;
}