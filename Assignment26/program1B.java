/*1. Accept number from user and display below pattern
INPUT : 5
OUTPUT: A   B   C   D   E
*/

import java.util.Scanner;

class Pattern
{
    public void Display(int iNo)
    {
        
        int iCnt = 0;
        char C = 'A';

        if(iNo <=26)
        {
            for(iCnt = 1; iCnt<=iNo; iCnt++)
            {
                System.out.printf("%c\t", C);
                C++;
            }
        }
        else
        {
            System.out.printf("\nEnter Valid number of Alphabets");
        }
    }
}

class program1B
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
