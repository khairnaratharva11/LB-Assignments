//3. Accept N number from user check whether that numbers contains 11 in it or not.
import java.util.*;
class Logic
{
    boolean Check(int Arr[])
    {
        int iCnt = 0;
        boolean bFlag = false;

        for(iCnt = 0; iCnt<Arr.length; iCnt ++)
        {
            if(Arr[iCnt]==11)
            {
                bFlag = true;
                break;
            }
        }
        return bFlag;
    }
}

class program3B 
{
    public static void main(String A[]) 
    {
        int iSize = 0,  iCnt = 0, Arr[] = null;
        boolean bRet = false ;
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

        bRet = lobj.Check(Arr);

        if(bRet == true)
        {
            System.out.println(("11 is present"));
        }
        else
        {
            System.out.println("11 is not present");
        }
        sobj.close();
    }    
}

