//1. Accept N numbers from user and return difference between summation of even elements and summation of odd elements.
import java.util.*;

class Logic
{
    int Difference(int Arr[])
    {
        int iCnt = 0, iSumEven = 0, iSumOdd = 0;

        for(iCnt = 0; iCnt<Arr.length; iCnt ++)
        {
            if(Arr[iCnt] %2 == 0)
            {
                iSumEven = iSumEven + Arr[iCnt];
            }
            else
            {
                iSumOdd = iSumOdd + Arr[iCnt];
            }   
        }
        return (iSumEven-iSumOdd);       
    }
}

class program1B
{
    public static void main(String A[]) 
    {
        int iSize = 0,  iCnt = 0,iRet = 0,Arr[] = null;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of Elements: ");
        iSize = sobj.nextInt();

        
        Arr = new int[iSize];

        System.out.println("Enter "+iSize+" elements");

        for(iCnt=0; iCnt<iSize ; iCnt ++)
        {
            System.out.print("\tEnter element"+(iCnt+1)+":\t");
            Arr[iCnt] = sobj.nextInt();
        }

        Logic lobj = new Logic();

        iRet = lobj.Difference(Arr);
        
        System.out.println("Result is "+iRet);

        sobj.close();
    }
}