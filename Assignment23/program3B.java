//3. Accept N numbers from user and accpt one another one another number as NO, return index of last occurrence of that NO.
import java.util.*;
class Logic
{
    int LastOcc(int Arr[],int iNo)
    {
        int iCnt = 0, iLastCount = 0;

        for(iCnt = 0; iCnt<Arr.length; iCnt ++)
        {
            if(Arr[iCnt] == iNo)
            {
                iLastCount = iCnt;
            }
        }

        return iLastCount;           
    }
}

class program3B 
{
    public static void main(String A[]) 
    {
        int iSize = 0,  iCnt = 0,iValue = 0, Arr[] = null;
        int iRet = 0;
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

        iRet = lobj.LastOcc(Arr, iValue);
        if(iRet ==0)
        {
            System.out.println("There is no such number");
        }
        else
        {
            System.out.println("Last occurrence of number is at index "+iRet);
        }
        sobj.close();
    }    
}

