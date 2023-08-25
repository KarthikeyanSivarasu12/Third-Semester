//Prepare Grade sheet for a student [ if..else if ] 

package OOPs laboratory.third experiment;
import java.util.Scanner;


public class Q2 {

    System.out.println("Enter the marks obtained:");
    Scanner sc=new Scanner(System.in);
    double a=sc.nextDouble();

    if(a>90.0&& a<=100.0)
    {
        System.out.println("Grade:A+");
    }
    else if(a>80.0 && a<=90.0)
    {
        System.out.println("Grade:A");
    }
    else if(a>70.0 && a<=80.0)
    {
        System.out.println("Grade:B");
    }
    else if(a>=60.0 && a<=70.0)
    {
        System.out.println("Grade:C");
    }
    else if(a>50.0 && a<=60.0)
    {
        System.out.println("Grade:D");
    }
    else if(a>50.0 && a<=60.0)
    {
        System.out.println("Grade:E");
    }
    else if(a>40.0 && a<=50.0)
    {
        System.out.println("Grade:F");
    }
    else 
    {
        if(a<=39.00 && a>=0.0)
        {
            System.out.println("Grade:RA");
        }
        else if( a<0.0 || a>100.0)
        {
             System.out.println("Enter a valid mark");
        }
    }


    
}
