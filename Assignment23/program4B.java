//4. Accept N numbers from user and accept Range, Display all elements from that Range
import java.util.*;
class Logic
{
    void Range(int Arr[],int iStart, int iEnd)
    {
        int iCnt = 0;

        for(iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt]>=iStart && Arr[iCnt]<=iEnd)
            {
                System.out.print(Arr[iCnt]+"\t");
            }
        }
    }
}

class program4B
{
    public static void main(String A[]) 
    {
        int iSize = 0,  iCnt = 0,iValue1 = 0,iValue2 = 0, Arr[] = null;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of Elements: ");
        iSize = sobj.nextInt();

        System.out.println("Enter the starting point: ");
        iValue1 = sobj.nextInt();
        System.out.println("Enter the ending point: ");
        iValue2 = sobj.nextInt();

        Arr = new int[iSize];

        System.out.println("Enter "+iSize+" elements");

        for(iCnt=0; iCnt<iSize ; iCnt ++)
        {
            System.out.print("\tEnter element"+(iCnt+1)+":\t");
            Arr[iCnt] = sobj.nextInt();
        }

        Logic lobj = new Logic();

        lobj.Range(Arr, iValue1, iValue2);
        
        sobj.close();
    }    
}

