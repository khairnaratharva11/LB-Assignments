/* Write a program to check whether a given year is a leap year or not */
package Assignment19;

class Logic
{
    void checkLeapYear(int year)
    {
        if(year % 4 == 0)
        {
            System.out.println(year+" is a Leap Year");
        }
        else
        {
            System.out.println(year+" is a not Leap Year");
        }
    }
}

class Program1 
{
    public static void main(String A[]) 
    {
        Logic obj = new Logic();
        obj.checkLeapYear(2024);
    }    
}
