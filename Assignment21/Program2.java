/* Write a program to count how many even and odd numbers are present between 1 and N */
package Assignment21;

class Logic
{
    void countEvenOddRange(int n)
    {
        int iCnt = 0;
        int CntEven = 0;
        int CntOdd = 0;
        for(iCnt = 1 ; iCnt <= n ; iCnt++)
        {
            if(iCnt%2 == 0)
            {
                CntEven++;
            }
            else
            {
                CntOdd++;
            }
        }
        System.out.println(CntEven+" Even numbers and "+CntOdd+" Odd numbers are present between 1 and "+n);

    }
}

class Program2 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.countEvenOddRange(50);    
    }    
}
