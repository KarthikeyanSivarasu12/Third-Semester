//Java Program to find the sum of all the elements in an array

import java.util.Scanner;

public class Main
{
     public static void main(String[] args) 
     {
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

          for(int element:arr)
          {
               sum+=element;
          }
          
          System.out.println("Sum is:"+" "+sum);

     }
}
