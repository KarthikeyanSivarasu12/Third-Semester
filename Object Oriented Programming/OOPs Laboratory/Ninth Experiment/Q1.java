import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        ArrayList<Integer> A = new ArrayList<Integer>();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of elements to add in the ArrayList");
        int total = sc.nextInt();
        for (int i = 0; i < total; i++) {
            System.out.println("Enter the data at index " + i);
            int data = sc.nextInt();
            A.add(data);
        }

        System.out.println("The elements in ArrayList are:");
        for (int element : A) {
            System.out.println(element);
        }
    }
}
