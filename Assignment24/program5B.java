//5. Accept N numbers from user and display summation of digits of each number
import java.util.*;

class Logic
{
    void DigitsSum(int Arr[])
    {
        int iCnt = 0, iNo = 0;

        for(iCnt= 0; iCnt<Arr.length; iCnt++)
        {
            int iSum = 0;
            while(Arr[iCnt] != 0)
            {
                iNo = Arr[iCnt]%10;
                iSum = iSum + iNo;
                Arr[iCnt] = Arr[iCnt]/10;
            }
            System.out.println(iSum+"\t");
        }
    }
}

class program5B
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

        lobj.DigitsSum(Arr);
        
        sobj.close();
    }
}