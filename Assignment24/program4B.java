//4. Accept N numbers from user and return the display all such number which contains 3 digits in it
import java.util.*;

class Logic
{
    void Display(int Arr[])
    {   
        int iNo = 0, iCnt = 0;
        for(iCnt = 0 ; iCnt<Arr.length; iCnt++)
        {
            if((Arr[iCnt]/100) < 10 && (Arr[iCnt]/100) > 0 )
            {
                System.out.println(Arr[iCnt]+"\t");
            }
        } 
    }
}

class program4B
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