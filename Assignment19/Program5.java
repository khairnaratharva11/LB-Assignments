/*Write a program to calculate the power of number using loops*/
package Assignment19;

class Logic
{
    void calculatePower(int base, int exp)
    {
        int iCnt = 0;
        int iProduct = 1;
        for(iCnt = 1; iCnt <= exp; iCnt++)
        {
            iProduct = iProduct * base;
        }

        System.out.println(iProduct);
    }
}
class Program5 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.calculatePower(2,5);    
    }
}
