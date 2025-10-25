/* Wrie a program to find the factorial of a number using a for loop*/
package Assignment16;

class Logic
{
    void findFactorial(int num)
    {
        int iCnt = 0;
        int iFactorial = 1;
        for(iCnt = 1 ; iCnt <= num; iCnt++)
        {
            iFactorial = iFactorial * iCnt; 
        }
        System.out.println("Factorial is "+ num + " is "+iFactorial);
    }
}
public class Program3 
{
    public static void main(String A[]) 
    {
        Logic obj = new Logic();
        obj.findFactorial(5);
    }    
}
