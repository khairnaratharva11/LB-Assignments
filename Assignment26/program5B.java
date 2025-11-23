/*5. Accept number from user and display below pattern
INPUT : 8
OUTPUT :  2    4   6   8   10  12  14  16
*/
import java.util.Scanner;

class Pattern
{
    public void Display(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt<=iNo; iCnt++)
        {
            System.out.printf("%d\t", (iCnt*2));
        }
    }
}

class program5B
{
    public static void main(String A[]) 
    {     
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter number of elements: ");
        iValue = sobj.nextInt();
        

        Pattern pobj = new Pattern();
        pobj.Display(iValue);        
    }    
}
