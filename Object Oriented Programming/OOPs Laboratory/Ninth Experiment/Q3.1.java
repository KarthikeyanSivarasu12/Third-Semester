import Advcalculate.Calculator; 
import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        Calculator object = new Calculator();
        Scanner sc = new Scanner(System.in); 

        System.out.println("Enter the first number:"); 
        int variable1 = sc.nextInt();
        System.out.println("Enter the second number:"); 
        int variable2 = sc.nextInt();

        System.out.println("The sum is:");
        object.add(variable1, variable2);
        System.out.println("The difference is:");
        object.sub(variable1, variable2);
        System.out.println("The product is:");
        object.mul(variable1, variable2);
        System.out.println("The quotient is:");
        object.div(variable1, variable2);
    }
}
