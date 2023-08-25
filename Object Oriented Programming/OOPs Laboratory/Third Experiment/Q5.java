//You have been given a number 'N'. Your task is to find the sum of all even numbers from 1 to N 

import java.util.Scanner;
public class Q5 {
    public static void main(String[] args)
    {
       Scanner sc=new Scanner(System.in);
       System.out.println("Enter a number:");
       int a=sc.nextInt();
       int sum=0;
       if(a<1)
       {
        System.out.println("Enter a positive number");
       }

       for(int i=2;i<=a;i+=2)
       {
           sum=sum+i;

       }
       System.out.println("The sum of even numbers from 1 to entered number is:"+" "+(double)sum);
    }
}
