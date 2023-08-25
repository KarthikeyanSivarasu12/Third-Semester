7. Write java program to print the pattern. [Nested for loop ]
//     *
//     *    *
//     *     *    *
//     *     *     *     *
//     *      *     *     *    *

import java.util.Scanner;
public class Q7 {
    public static void main(String[] args)
    {   
        Scanner sc = new Scanner(System.in);
        int b=sc.nextInt();
        for(int i=0;i<b;i++)
        {
            for(int j=0;j<i+1;j++)
            {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
    
}
