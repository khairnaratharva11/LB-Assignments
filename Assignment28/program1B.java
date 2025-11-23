/*1. Accept number of rows and coulumns from use and display below pattern
INPUT : iRow = 4        iCol = 4
OUTPUT :  A   B   C   D
          A   B   C   D
          A   B   C   D
          A   B   C   D
*/
import java.util.Scanner;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;
        if(iCol<=26)
        {
            for(i = 1; i<=iRow; i++)
            {
                char ch = 'A';
                for(j = 1; j<=iCol; j++)
                {
                    System.out.printf("%c\t", ch);
                    ch++;
                }
                System.out.printf("\n");
            }
        }    
        else
        {
            System.out.printf("Enter valid number of Columns");
        }
    }
}

class program1B
{
    public static void main(String A[]) 
    {     
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter number of rows: ");
        iValue1 = sobj.nextInt();
        
        System.out.println("Enter number of columns: ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue1, iValue2);        
    }    
}