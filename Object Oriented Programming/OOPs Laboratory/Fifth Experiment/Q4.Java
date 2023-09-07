//  Find the majority element from the given array.

// Eg: Enter number of elements of the array : 5
// Enter element 1 : 2
// Enter element 1 : 3
//  Enter element 1 : 1
//  Enter element 1 : 2
//  Enter element 1 : 5
// Major element is : 2

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

        for (int j = 0; j < n; j++) {
            boolean foundDuplicate = false;  // Flag to track duplicates
            for (int k = j + 1; k < n; k++) {
                if (arr[j] == arr[k]) {
                    if (!foundDuplicate) {
                        System.out.println("Duplicate elements:");
                        foundDuplicate = true; // Set the flag to true to avoid further printing
                    }
                    System.out.println(arr[j]);
                    break; // Break out of the inner loop after finding the first duplicate
                }
            }
        }
    }
}
