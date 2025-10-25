/* Write a program to print all odd numbers upto N*/
package Assignment18;

class Logic
{
    void printOddNUmbers(int n)
    {
        int iCnt = 0;
        for(iCnt = 0 ; iCnt<= n ; iCnt++)
        {
            if(iCnt%2 != 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}
class Program3 
{
    public static void main(String A[]) 
    {
        Logic obj = new Logic();
        obj.printOddNUmbers(20); 
    }    
}
