/*Write a program to find the smallest digit in a given number*/
package Assignment20;

class Logic
{
    void findSmallestDigit(int num)
    {
        int iOriginalnum = num;
        int iMin = 10; 
        int iDigit = 0;

        while(num != 0)
        {
            iDigit = num % 10; 
            if(iDigit < iMin)
            {
                iMin = iDigit;
            }
            num = num / 10;
        }

        System.out.println("The smallest digit in " + iOriginalnum + " is: " + iMin);
    }
}
class Program5
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.findSmallestDigit(45872);
    }
}
