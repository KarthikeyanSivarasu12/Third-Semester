//  Write a java program to Insert an element in the array.
// EG; Enter number of elements of the array : 5
//        Enter element 1 : 10
//        Enter element 2 : 20
//         Enter element 3 : 30
//        Enter element 4 : 40
//        Enter element 5 : 50

// Enter the position where you want to insert element : 2
// Enter the element you want to insert : 60
// After inserting : 10 60 20 30 40 50
import java.util.Scanner;

public class Q5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of elements in the array");
        int n = sc.nextInt();

        int[] arr = new int[n];
        for (int i = 0; i < arr.length; i++) {
            System.out.println("Enter the element at index " + i);
            arr[i] = sc.nextInt();
        }

        System.out.println("Enter the index you want to insert the element:");
        int a = sc.nextInt();
        if (a < 0 || a > n) {
            System.out.println("Invalid index. Index should be between 0 and " + n);
            return; // Exit the program if the index is invalid
        }

        System.out.println("Enter the element:");
        int b = sc.nextInt();

        int[] newarr = new int[n + 1];

        for (int j = 0, k = 0; j < n + 1; j++) {
            if (j == a) {
                newarr[j] = b;
            } else {
                newarr[j] = arr[k++];
            }
        }

        // Print the new array
        System.out.println("New Array:");
        for (int i = 0; i < newarr.length; i++) {
            System.out.println("Element at index " + i + ": " + newarr[i]);
        }
    }
}
