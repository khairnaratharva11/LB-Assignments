//3. Write a program which accept distance in kilometer and convert it into meter
// 1 Kilometer = 1000 Meter
#include<stdio.h>
int KMtoMeter(int iNo)
{
    int iDistance = 0;
    iDistance =  iNo * 1000;

    return iDistance;
}
//Time Complexity: O(1)
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance: ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("%d km in Meter is %d m", iValue, iRet);
}