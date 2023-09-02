//  Find the majority element from the given array.

// Eg: Enter number of elements of the array : 5
// Enter element 1 : 2
// Enter element 1 : 3
//  Enter element 1 : 1
//  Enter element 1 : 2
//  Enter element 1 : 5
// Major element is : 2

import java.util.Scanner;
public class Q4
{
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

        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(arr[j]==arr[k])
                {
                    System.ot.println("The major element is"+" "+arr[j]);
                }
            }
        }
    }
}