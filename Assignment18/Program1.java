/* Write a program to check whether a number is prime or not*/
package Assignment18;

class Logic
{
    void checkPrime(int num)
    {
        int iCnt = 0;
        int iFlag = 0 ;
        for(iCnt = 2 ; iCnt<= num/2; iCnt++)
        {
            if(num%iCnt == 0)
            {
                iFlag++;                
            }            
        }

        if(iFlag != 0)
        {
            System.out.println("This is not a Prime number");
        }
        else
        {
            System.out.println("This is a Prime number");
        }
    }
}

class Program1 
{
    public static void main(String A [])
    {
        Logic obj = new Logic();
        obj.checkPrime(11);
    }
}
