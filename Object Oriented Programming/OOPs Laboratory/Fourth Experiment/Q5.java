//Write a java program  to check whether the number is odd or even

import java.util.Scanner;
public class Main{
    public static void main(String[] args)
    {
         Scanner sc=new Scanner(System.in);
         System.out.println("Enter the number:");
        int a=sc.nextInt();

        if(a%2==0)
        {
            System.out.println("The number is even");
        }
        else if(a%2!=0)
        {
            System.out.println("The number is odd");
        }
        else
        {
            System.out.println("The number is neither odd nor even");
        }
    }    
}