//5. Accept N numbers from user and display all such elements which are multiples of 11.
import java.util.*;

class Logic
{
    void Display(int Arr[])
    {
        int iCnt = 0, iSumEven = 0, iSumOdd = 0;

        for(iCnt = 0; iCnt<Arr.length; iCnt ++)
        {
            if(Arr[iCnt]%11 == 0)
            {
                System.out.println(Arr[iCnt]+"\t");       
            }
        }     
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

        lobj.Display(Arr);

        sobj.close();
    }
}