/* Write a program to check whether a given number is Even or Odd*/
package Assignment16;

class Logic
{
    void checkEvenOdd(int num)
    {
        if( num % 2 == 0)
        {
            System.out.println("Even");
        }
        else
        {
            System.out.println("Odd");
        }
    }
}

class Program2
{
    public static void main(String A[] )
    {
        Logic obj = new Logic();
        obj.checkEvenOdd(7);    
    }
}
