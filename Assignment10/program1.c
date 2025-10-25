//1. Write a program which accept radius of circle from user and calculate it area.
// Consider value of PI as 3.14. (Are = PI * Radius * Radius)
#include<stdio.h>
double CircleArea(float fRadius)
{
    double dArea =0;
    float PI = 3.14;

    dArea = PI * fRadius * fRadius;
    return dArea;
}
//Time Complexity: O(1)
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is %f", dRet);

    return 0;
}