//Take the length (L) and breadth (B) of the rectangle as input and find its area

import java.util.Scanner;

public class Q4 {
    public static void main(String[] args)
    {
         Scanner sc=new Scanner(System.in);
         System.out.println("Enter the length of rectangle:");
         double a=sc.nextDouble();
         System.out.println("Enter the breadth of rectangle:");
         double b=sc.nextDouble();
         double area;

         area=a*b;
         System.out.println("Area of the rectangle:"+" "+ area);
         

    }
    
}
