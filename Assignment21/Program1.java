/*Write a program to calculate the product of digits of a number*/
package Assignment21;

class Logic
{
    void productOfDigits(int num)
    {
        int iDigit = 0;
        int iProduct = 1;
        while(num!=0)
        {
            iDigit = num % 10;
            iProduct = iProduct * iDigit;
            num = num / 10;
        }
        System.out.println(iProduct);
    }
}

class Program1 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.productOfDigits(234);    
    }
}
