/* Write a program to check whether a number is a palinrome or not */
package Assignment17;

class Logic
{
    void checkPalindrome(int num)
    {
        int originalnum = num;
        int iDigit = 0;
        int revnum = 0;
        while(num != 0)
        {
            iDigit = num%10 ; 
            revnum = (revnum*10)+iDigit;
            num = num/10;
        }
        if(revnum == originalnum)
        {
            System.out.println("It is a Palindrome");
        }
        else
        {
            System.out.println("It is a not Palindrome");
        }
    }
}

class Program2 
{
    public static void main(String A[]) 
    {
        Logic obj = new Logic();
        obj.checkPalindrome(121);
    }
}
