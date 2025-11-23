/*1. Accept number of rows and coulumns from use and display below pattern
INPUT : iRow = 4        iCol = 4
OUTPUT :    1   2   3   4   
            5   6   7   8
            9   1   2   3
            4   5   6   7
*/
import java.util.Scanner;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0, iCnt = 0;
        iCnt =1;
        for(i = 1; i<=iRow; i++)
        {
            for(j = 1; j<=iCol; j++)
            {
                System.out.printf("%d\t", iCnt);
                if(iCnt<9)
                {
                    iCnt++;
                }         
                else
                {
                    iCnt = 1;
                }    
            }
            
            System.out.printf("\n");
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