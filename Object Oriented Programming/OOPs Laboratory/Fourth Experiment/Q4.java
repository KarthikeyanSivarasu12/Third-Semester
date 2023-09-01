//Write a java program  to check whether the given year is leap year or not 

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the year to be checked: ");
        int year = sc.nextInt();

        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            System.out.println("Yes, the given year is a leap year");
        } else {
            System.out.println("No, the given year is not a leap year");
        }
    }
}
