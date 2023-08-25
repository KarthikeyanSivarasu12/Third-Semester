//Check whether the given number is positive, negative or zero [ if..else if] 

import java.util.Scanner;
public class Q3 {
    public static void main(String[] args)
    {
       Scanner sc=new Scanner(System.in);
       System.out.println("Enter a number:");
       double x=sc.nextDouble();

       if(x>0.0)
       {
        System.out.println("The entered number is positive");
       }
       else if(x<0.0)
       {
          System.out.println("The entered number is negative");
       }
       else
       {
          System.out.println("The entered number is equal to zero");
       }
       
       
    
    }
}
    

