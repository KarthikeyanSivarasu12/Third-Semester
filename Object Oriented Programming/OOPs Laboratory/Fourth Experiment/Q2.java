package OOPs Laboratory.Fourth Experiment;

public class Q3 {
    
}


//Write a java program that uses double variables to compute area of circle.

import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the radius:");
        double radius=sc.nextDouble();

        double area;
        area=(3.14*(radius)*(radius));
        System.out.println("Area is:"+" "+area);
        

    
    }
}
