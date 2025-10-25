/*Write a program to count the number of digits in a given number*/

package Assignment16;

class Logic
{
    void countDigits(int num)
    {
        int iCount = 0;
        while(num != 0)
        {
            num = num / 10;
            iCount++;
        }
        System.out.println((iCount));
    }
}
class Program5 
{
    public static void main(String A[]) 
    {
        Logic obj = new Logic();
        obj.countDigits(7865);
    }
}