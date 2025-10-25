/*Write a program to print number from N down to 1 in reverse order*/
package Assignment20;

class Logic
{
    void printReverse(int n)
    {
        int iCnt = 0;
        for(iCnt=n; iCnt>=1; iCnt--)
        {
            System.out.println(iCnt);
        }
    }
}

class Program2 
{
    public static void main(String[] args)
    {
    Logic obj = new Logic();
    obj.printReverse(10);
    }
}
