/*Write a program to reverse the number*/
package Assignment16;

class  Logic
{
    int iDigit = 0;
    void reverseNumber(int num)
    {
        while(num != 0)
        {
            iDigit = num % 10;
            num = num/ 10;
            System.out.println(iDigit);
        } 
    }
}
public class Program4
{
    public static void main(String A[]) 
    {
        Logic obj = new Logic();
        obj.reverseNumber(1234);
    }    
}
