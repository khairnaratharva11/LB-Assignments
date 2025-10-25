/* Write a program to print all number from 1 to N that are divisible by both 2 and 3*/
package Assignment21;

class Logic
{
    void printDivisibleby2and3(int n)
    {
        int iCnt = 0;
        for(iCnt = 1 ; iCnt<=n; iCnt++)
        {
            if(iCnt%2 == 0 || iCnt%3 == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

class Program5
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.printDivisibleby2and3(30);    
    }   
}
