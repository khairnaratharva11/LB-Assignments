/*4. Accept number from user and display below pattern
INPUT : 4
OUTPUT :  #  1   *    #  2   *  #  3   *    #  4   *    #  5   *
*/

import java.util.Scanner;

class Pattern
{
    public void Display(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt<=iNo; iCnt++)
        {
            System.out.printf("#\t%d\t*\t", iCnt);
        }
    }
}

class program4B
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
