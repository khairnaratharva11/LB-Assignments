//4. Accept N number from user and return frequency of 11 from it.
import java.util.*;
class Logic
{
    int Frequency(int Arr[])
    {
        int iCnt = 0, iFreq = 0;

        for(iCnt = 0; iCnt<Arr.length; iCnt ++)
        {
            if(Arr[iCnt]==11)
            {
                iFreq ++;
            }
        }
        return iFreq;
    }
}

class program4B 
{
    public static void main(String A[]) 
    {
        int iSize = 0,  iCnt = 0,iRet = 0, Arr[] = null;
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

        iRet = lobj.Frequency(Arr);

        System.out.println(iRet);
        sobj.close();
    }    
}

