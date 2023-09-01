//Make use of break statement in a while loop to calculate sum of all positive numbers
// Eg:  
// Enter a number :  3
// Enter a number :  6
// Enter a number :  -7
// Sum is : 9

import java.util.Scanner;
import java.util.ArrayList;

public class Main{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        boolean a =true;
        ArrayList<Integer> t=new ArrayList<Integer>();
        int psum=0;

        
        while(a)
        {
            System.out.println("Enter a number");
            int b=sc.nextInt();
            if(b==0)
            {
                break;
            }
            else{
                 t.add(b);
            }
        }

        for(int element:t)
        {
            if(element>0)
            {
                psum+=element;
            }
            else{
                continue;
            }
        }

        System.out.println("The positive sum is:"+" "+psum);
    }

}