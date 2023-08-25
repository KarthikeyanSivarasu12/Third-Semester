// For the given integer just print the sum of all even digits and odd digits separately. 
//    Eg:  Input : 1234
//     Output  : 6 ( Sum of even numbers)
//     4 (Sum of odd numbers)

import java.util.Scanner;

public class Q6_2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int b = sc.nextInt();
        int sumodd = 0;
        int sumeven = 0;

        String elementString = String.valueOf(b);
        String[] c = elementString.split("");
        int i = 0;

        for (String element : c) {
            int d = Integer.parseInt(element);
            if (d % 2 == 0) {
                sumeven += d;
            } else {
                sumodd += d;
            }
        }
        System.out.println("Sum of odd digits: " + sumodd);
        System.out.println("Sum of even digits: " + sumeven);
    }
}

