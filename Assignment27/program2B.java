/*2. Accept number of rows and coulumns from use and display below pattern
INPUT : iRow = 4        iCol = 3
OUTPUT :  1   1   1   1
          2   2   2   2
          3   3   3   3
*/
import java.util.Scanner;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;

        for(i = 1; i<=iRow; i++)
        {
            for(j = 1 ; j <=iCol ; j++)
            {
                System.out.printf("%d\t", j);
            }
            System.out.printf("\n");
        }
    }
}

class program2B
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