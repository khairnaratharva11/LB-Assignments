//5. Accept N numbers from user and return product of all odd elements.
import java.util.*;
class Logic
{
    int Product(int Arr[])
    {
        int iCnt = 0, iProduct = 1;

        for(iCnt = 0; iCnt<Arr.length; iCnt ++)
        {
            if (Arr[iCnt] % 2 != 0)
            {
                iProduct = iProduct * Arr[iCnt];
            }
        }
        return iProduct;     
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

        iRet = lobj.Product(Arr);
        
        System.out.println("Product is "+iRet);

        sobj.close();
    }    
}

