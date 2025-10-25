package Assignment18;

class Logic
{
    void checkSign(int num)
    {
        if(num>0)
        {
            System.out.println("Positive");
        }
        else if(num<0)
        {
            System.out.println("Negative");
        }
        else
        {
            System.out.println("Zero");
        }
    }
}

class Program5 
{
    public static void main(String A[]) 
    {
        Logic obj = new Logic();
        obj.checkSign(-8);    
    }    
}
