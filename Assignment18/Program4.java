/*Write a program to find the sum of even and odd digits seperately in a number */
package Assignment18;

class Logic
{
    int iDigit = 0;
    int sumEven = 0;
    int sumOdd = 0;
    void sumEvenOddDigits(int num)
    {
        while(num !=0)
        {
            iDigit = num % 10;
            num = num / 10;
            if(iDigit % 2 == 0)
            {
                sumEven++;
            }
            else
            {
                sumOdd++;
            }
        }
        System.out.println(sumEven);
        System.out.println(sumOdd);
    }
}

class Program4 
{
    public static void main(String A[]) 
    {
        Logic obj = new Logic();
        obj.sumEvenOddDigits(123456);    
    }
}
