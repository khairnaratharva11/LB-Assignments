//1. Accept N number from user and accept one another number as NO check whether NO is present or not.
import java.util.*;
class Logic
{
    boolean Frequency(int Arr[], int iNo)
    {
        int iCnt = 0;
        boolean bFlag = false;;

        for(iCnt = 0; iCnt<Arr.length; iCnt ++)
        {
            if(Arr[iCnt]==iNo)
            {
                bFlag = true;
            }
        }
        return bFlag;
    }
}

class program1B 
{
    public static void main(String A[]) 
    {
        int iSize = 0,  iCnt = 0,iValue = 0, Arr[] = null;
        boolean bRet = false;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of Elements: ");
        iSize = sobj.nextInt();

        System.out.println("Enter the number: ");
        iValue = sobj.nextInt();

        Arr = new int[iSize];

        System.out.println("Enter "+iSize+" elements");

        for(iCnt=0; iCnt<iSize ; iCnt ++)
        {
            System.out.print("\tEnter element"+(iCnt+1)+":\t");
            Arr[iCnt] = sobj.nextInt();
        }

        Logic lobj = new Logic();

        bRet = lobj.Frequency(Arr, iValue);

        if(bRet == true)
        {
            System.out.println("Number is present");
        }
        else
        {
            System.out.println("Number is not present");
        }
        sobj.close();
    }    
}

