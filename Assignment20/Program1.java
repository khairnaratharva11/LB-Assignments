/* Write a program to find the sum of all even numbers upto N*/
package Assignment20;

class Logic
{
    void sumEvenNumbers(int n)
    {
        int iCnt = 0;
        int iSum = 0;
        for(iCnt = 1 ; iCnt<= n; iCnt++)
        {
            if(iCnt%2==0)
            {
                iSum = iSum + iCnt;
            }
        } 
        System.out.println("Sum of Even numbers till "+n+" is "+iSum);
    }
}
class Program1 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.sumEvenNumbers(10);    
    }    
}
