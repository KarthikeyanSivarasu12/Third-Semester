// 3. Create a class Calculator inside a package name Advcalculate. To create a class inside a package, 
//declare the package name in the first statement in your program. A class can have only one package declaration.
// Make use of this package  Advcalculate   in another program and use the class Calculator. 
//Create more number of classes in   Advcalculate, 
//and import the package to make use all the classes of this package. 

package Advcalculate;

public class Calculator {
    public int add(int a, int b) {
        return a + b;
    }

    public int subtract(int a, int b) {
        return a - b;
    }

    public int multiply(int a, int b) {
        return a * b;
    }

    public double divide(int a, int b) {
        if (b == 0) {
            System.out.println("Error: Division by zero!");
            return Double.POSITIVE_INFINITY;
        } else {
            return (double) a / b;
        }
    }
}



 class PowerCalculator {

    public static double calculatePower(int base, int exponent) {
        return Math.pow(base, exponent);
    }
}




