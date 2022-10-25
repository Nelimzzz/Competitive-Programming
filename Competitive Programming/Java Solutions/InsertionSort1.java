import java.util.*;

public class InsertionSort1
{
    static void insertionSort (int[]ar)
    {
        if (ar.length<2)
        return;
        int last = ar[ar.length-1], i=ar.length-1;
        while (i>0 && ar[--i]>last)
        {
            ar[i+1]=ar[i];
            printArray(ar);
        }
        if (i==0 && ar[0]>last)
        ar[i--] = ar[0];
        ar [i+1]= last;
        
        printArray(ar);
    }
     static void printArray(int[] ar) 
     {
         for(int n: ar)
         {
            System.out.print(n+" ");
         }
           System.out.println("");
      }
       
      public static void main(String[] args) 
      {
           Scanner sc = new Scanner(System.in);
           int n = sc.nextInt();
           int[] ar = new int[n];
           for(int i=0;i<n;i++)
           {
              ar[i]=sc.nextInt(); 
           }
           insertionSort(ar);
       }    
}
