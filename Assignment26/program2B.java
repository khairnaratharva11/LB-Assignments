/*2. Accept number from user and display below pattern
INPUT : 5
OUTPUT: 5   #   4   #   3   #   2   #   1   #
*/

import java.util.Scanner;

class Pattern
{
    public void Display(int iNo)
    {
        int iCnt = 0;

        for(iCnt = iNo; iCnt>=1; iCnt--)
        {
            System.out.printf("%d\t#\t", iCnt);
        }
    }
}

class program2B
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
