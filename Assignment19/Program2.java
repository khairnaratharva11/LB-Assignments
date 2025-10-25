/* Write a program to display the grade of student based on marks*/
package Assignment19;

class Logic
{
    void displayGrade(int marks)
    {
        if(marks>100 || marks <0)
        {
            System.out.println("Invalid Entry of Marks");
        }
        else
        {
            if(marks<=100 && marks>80)
            {
                System.out.println("A");
            }
            else if(marks<=80 && marks>60)
            {
                System.out.println("B");
            }
            else if(marks<=60 && marks>40)
            {
                System.out.println("C");
            }
            else if(marks<=40 && marks>20)
            {
                System.out.println("D");
            }
            else
            {
                System.out.println("E");
            }
        }   
    }
}

class Program2 
{
    public static void main(String A[]) 
    {
        Logic obj = new Logic();
        obj.displayGrade(82);    
    }
}
