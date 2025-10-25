/*Write a program to calculate the sum of first N natural numbers.*/
package Assignment16;
class Logic {
    private int n;

    public Logic(int n)
    {
        this.n = n;
    }
    public void calculateSum() 
    {
        int iSum = 0;
        for (int iCnt = 1; iCnt <= this.n; iCnt++) 
        {
            iSum = iSum + iCnt;
        }
        
        System.out.println("The sum of numbers from 1 to " + this.n + " is: " + iSum);
    }
}
class Program1
{
    public static void main (String A[])
    {
        Logic obj = new Logic(10);
        obj.calculateSum();
    }
}