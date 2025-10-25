/*Write a program to print each digit of a number seperately*/
package Assignment19;

class Logic
{
    void printDigit(int num)
    {
        int iDigit = 0;
        while(num!=0)
        {
            iDigit = num % 10;
            System.out.println(iDigit);
            num = num / 10;
        }
    }
}

class Program4 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.printDigit(9876);    
    }
}
