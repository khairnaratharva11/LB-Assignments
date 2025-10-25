/*Write a program  to find the maximum of two numbers*/
package Assignment17;

class Logic
{
    void findMax(int a, int b)
    {
        if(a>b)
        {
            System.out.println(a+" is Greater than "+b);
        }
        else
        {
            System.out.println(b+" is Greater than "+a);
        }
    }
}

class Program3 
{
    public static void main(String A[]) 
    {
        
    Logic obj = new Logic();
    obj.findMax(20, 15);
    }
}
