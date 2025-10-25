/* Write a program to find the sum of digits of a nunber*/

package Assignment17;

class Logic
{
    int iDigit = 0;
    int iSum = 0;
    void sumDigits(int num)
    {
        while(num != 0)
        {
            iDigit = num % 10;
            num = num/ 10;
            iSum = iSum + iDigit;
        }
        System.out.println(iSum);
    }   
}

class Program1 
{
    public static void main(String A[]) 
    {
        Logic obj = new Logic();
        obj.sumDigits(1234);
    }
}