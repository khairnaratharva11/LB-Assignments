//1. Accept N numbers from user and return frequency of even numbers

import java.util.*;

class Logic
{
    int CountEven(int Brr[])
    {
        int iCnt = 0, iSum = 0;

         for(iCnt= 0; iCnt<Brr.length ; iCnt++)
        {
            if(Brr[iCnt] % 2 ==0)
            {
                iSum = iSum + 1;
            }
        }
            
        return iSum;
    }

}

class program1B 
{
    public static void main(String A[]) 
    {
        int iSize = 0, iRet = 0 , iCnt = 0, Arr[] = null;
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

        iRet = lobj.CountEven(Arr);

        System.out.println(("Result is: "+iRet));

        sobj.close();
    }    
}
