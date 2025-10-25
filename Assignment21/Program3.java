/* Write a program to display all factors of a given number*/
package Assignment21;

class Logic
{
    void displayFactors(int num)
    {
        int iCnt = 0;
        for(iCnt = 1 ; iCnt<=num/2; iCnt++)
        {
            if(num%iCnt == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

class Program3 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.displayFactors(12);    
    }   
}
