/*2. Accept number of rows and coulumns from use and display below pattern
INPUT : iRow = 4        iCol = 4
OUTPUT :    2   4   8   10   
            1   3   5   7
            2   4   8   10   
            1   3   5   7
*/
import java.util.Scanner;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0, iCnt = 0;
        for(i = 1; i<=iRow; i++)
        {
            if(i %2 == 0)
            {
                for(j = 1 , iCnt =1 ; j<=iCol; j++ , iCnt = iCnt +2)
                {
                    System.out.printf("%d\t", iCnt);
                }
            }
            else
            {
                for(j = 1 , iCnt = 2; j<=iCol; j++ , iCnt=iCnt +2)
                {
                    System.out.printf("%d\t", iCnt);
                }   
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