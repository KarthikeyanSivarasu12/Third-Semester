//Write a java program  to find factorial of a number 
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number for which factorial needs to be found:");
        int a = sc.nextInt();

        int b = factorial(a);
        System.out.println("Factorial of " + a + ": " + b);
    }

    public static int factorial(int c) {
        int product = 1;
        for (int i = c; i >= 1; i--) {
            product *= i;
        }
        return product;
    }
}
