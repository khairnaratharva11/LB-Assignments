//1. Write a program which accept radius of circle from user and calculate it area.
// Consider value of PI as 3.14. (Are = PI * Radius * Radius)
#include<stdio.h>
double CircleArea(float fWidth, float fHeight)
{
    double dArea =0;
    
    dArea =  fWidth * fHeight;
    return dArea;
}
//Time Complexity: O(1)
int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Width: ");
    scanf("%f", &fValue1);
    
    printf("Enter Height: ");
    scanf("%f", &fValue2);

    dRet = CircleArea(fValue1, fValue2);

    printf("Area of Circle is %f", dRet);

    return 0;
}