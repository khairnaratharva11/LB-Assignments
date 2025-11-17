//3. Accept N numbers from user and return the difference between largest and smallest number.
import java.util.*;

class Logic
{
    int Difference(int Arr[])
    {
        int iCnt = 0, iMin = Arr[1], iMax = 0;

        for(iCnt = 0; iCnt<Arr.length; iCnt ++)
        {
            if(Arr[iCnt] < iMin)
            {
                iMin = Arr[iCnt];
            }
            if(Arr[iCnt] > iMax)
            {
                iMax = Arr[iCnt];
            }   
        }
        return (iMax-iMin);       

    }
}

class program3B
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
        
        System.out.println("Difference is "+iRet);

        sobj.close();
    }
}