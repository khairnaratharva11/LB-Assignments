/*Write a program to find the largest digit in a given number*/
package Assignment20;

class Logic
{
    void findLargestDigit(int num)
    {
        int iOriginalnum = num;
        int iMax = 0; 
        int iDigit = 0;

        while(num != 0)
        {
            iDigit = num % 10; 
            if(iDigit > iMax)
            {
                iMax = iDigit;
            }
            num = num / 10;
        }

        System.out.println("The largest digit in " + iOriginalnum + " is: " + iMax);
    }
}
class Program4 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.findLargestDigit(83429);
    }
}
