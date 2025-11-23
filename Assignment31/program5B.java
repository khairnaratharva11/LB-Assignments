/*5. Accept number of rows and coulumns from use and display below pattern
INPUT : iRow = 4        iCol = 4
    OUTPUT :    
            1       2       3       4
                    2       3       4
                            3       4
                                    4
*/
import java.util.Scanner;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0, k = 0;

        if(iRow!=iCol)
            {
                System.out.printf("Invalid Input");
                System.out.printf("Row number and Column number should be same");
                return ;
            }
        for(i = 1; i<=iRow; i++)
        {
            for(j = 1; j<=iCol; j++)
            {
                if(i>j)
                {
                    System.out.printf("\t");
                }
                else
                {
                    System.out.printf("%d\t", j);
                }
            }
            System.out.printf("\n");
        }
    }
}

class program5B
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