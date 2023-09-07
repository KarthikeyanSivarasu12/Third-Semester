//Find the missing element in the range from 1 to N+1 without sorting the array.
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of elements in the array");
        int n = sc.nextInt();
        
        int[] arr = new int[n];
        for (int i = 0; i < arr.length; i++) {
            System.out.println("Enter the element at index " + i);
            arr[i] = sc.nextInt();
        }

        boolean foundMissing = false;
        for (int j = 0; j < arr.length - 1; j++) {
            if (arr[0] != 1) {
                System.out.println("Missing number is: 1");
                foundMissing = true;
                break;
            } else if (arr[j] + 1 != arr[j + 1]) {
                System.out.println("Missing number is: " + (arr[j] + 1));
                foundMissing = true;
                break;
            }
        }

        if (!foundMissing) {
            System.out.println("No missing number in the array.");
        }
    }
}
