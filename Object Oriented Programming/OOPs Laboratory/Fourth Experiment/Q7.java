//Write a java program  to Prepare a grade sheet for a student  (use loops)


import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int courses = 5;
        System.out.println("Enter the name of the student:");
        String name = sc.nextLine();
        
        for (int i = 0; i < courses; i++) {
            System.out.print("Enter the name of course " + (i+1) + ": ");
            String subject = sc.nextLine();
            
            System.out.print("Enter the marks of course " + subject + ": ");
            int marks = sc.nextInt();
            sc.nextLine(); // Consume the newline character after reading the integer input
            
            System.out.println("The grade of course " + subject + ":");
            grade(marks);
        }
    }

    public static void grade(int a) {
        if (a >= 90) {
            System.out.println("Grade is A");
        } else if (a >= 80) {
            System.out.println("Grade is B");
        } else if (a >= 70) {
            System.out.println("Grade is C");
        } else if (a >= 60) {
            System.out.println("Grade is D");
        } else if (a >= 50) {
            System.out.println("Grade is E");
        } else {
            System.out.println("Grade is F");
        }
    }
}
