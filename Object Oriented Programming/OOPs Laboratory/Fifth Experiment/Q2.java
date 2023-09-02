// Display the sum of maximum and minimum values in the given array.
package OOPs Laboratory.Fifth Experiment;

import java.util.Scanner;
public class Q2 {
    public static void main(String[] args) {
        
   

    Scanner sc=new Scanner(System.in);
          System.out.println("Enter the number off elements in the array");
          int n=sc.nextInt();
          int sum=0;

          int[] arr=new int[n];
          for(int i=0;i<arr.length;i++)
          {
               System.out.println("Enter the element at index "+i);
               arr[i]=sc.nextInt();
          }

          int min=arr[0];
          int max=arr[0];
          for(int element:arr)
          {
            if(element<min)
            {
                min=element;
            }
          }
           for(int element2:arr)
          {
            if(element2>max)
            {
                max=element2;
            }
          }

          System.out.println("Maximum+Minimum"+" "+(min+max));


        }
}
