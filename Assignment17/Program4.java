/* Write a Program to find the minimum of three numbers */
package Assignment17;

class Logic
{
    void findMin(int a, int b, int c)
    {
        if(a>b && a>c)
        {
            System.out.println(a+" is Greater than "+b+" and "+c);
        }
        else if(b>a && b>c)
        {
            System.out.println(b+" is Greater than "+a+" and "+c);
        }
        else
        {
            System.out.println(c+" is Greater than "+a+" and "+b);
        }
    }
}

class Program4
{
    public static void main(String A[]) 
    {   
        Logic obj = new Logic();
        obj.findMin(3,7,2);
    }
}
