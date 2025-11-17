//1. Accept N numbers from user and return the largest number.
import java.util.*;

class Logic
{
    int Maximum(int Arr[])
    {
        int iCnt = 0, iMax = 0;

        for(iCnt = 0; iCnt<Arr.length; iCnt ++)
        {
            if(Arr[iCnt] > iMax)
            {
                iMax = Arr[iCnt];
            }
        }

        return iMax; 
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

        iRet = lobj.Maximum(Arr);
        
        System.out.println("Largest Number is "+iRet);

        sobj.close();
    }
}