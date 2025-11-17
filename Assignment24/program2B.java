//2. Accept N numbers from user and return the smallest number.
import java.util.*;

class Logic
{
    int Minimum(int Arr[])
    {
        int iCnt = 0, iMin = Arr[iCnt];

    for(iCnt = 0; iCnt<Arr.length; iCnt ++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        } 
    }

    return iMin; 
    }
}

class program2B
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

        iRet = lobj.Minimum(Arr);
        
        System.out.println("Smallest Number is "+iRet);

        sobj.close();
    }
}