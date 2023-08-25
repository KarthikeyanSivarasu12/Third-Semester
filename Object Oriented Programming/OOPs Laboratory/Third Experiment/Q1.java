// Find greatest of Two numbers [ if,else]
package OOPs laboratory.third experiment;
import java.util.Scanner;

public class Q1
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the First Number:");
        int x=sc.nextInt();
        System.out.println("Enter the Second Number:");
        int y=sc.nextInt();

        if(x>y)
        {
            System.out.println("The greatest number is:"+" "+x);

        }
        else 
        {
             if(x<y)
             {
                System.out.println("The greatest number is :"+" "+y);
             } else
             {
                System.out.println("Two numbers entered by you are equal");
             }
        }



    }
}
