/*3. Accept number of rows and coulumns from use and display below pattern
INPUT : iRow = 5        iCol = 5
OUTPUT :    a   b   c   d   e
            1   2   3   4   5
            a   b   c   d   e
            1   2   3   4   5
            a   b   c   d   e
*/
import java.util.Scanner;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0, iCnt = 0;
        char ch = '\0';
        for(i = 1; i<=iRow; i++)
        {
            if(i %2 == 0)
            {
                for(j = 1 , iCnt =1 ; j<=iCol; j++ , iCnt++)
                {
                    System.out.printf("%d\t", iCnt);
                }
            }
            else
            {
                for(j = 1 , ch = 'a'; j<=iCol; j++ , ch++)
                {
                    if(iCol<=26)
                    {
                        System.out.printf("%c\t", ch);
                    }
                    else
                    {
                        System.out.printf("Enter valid number of alphabets..");
                        break;
                    }
                }   
            }
            System.out.printf("\n");
        }   
    }
}

class program3B
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