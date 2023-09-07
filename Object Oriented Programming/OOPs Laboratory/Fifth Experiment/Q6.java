// Write a java program to print the sum of two matrices.
package OOPs Laboratory.Fifth Experiment;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of rows (n):");
        int n = sc.nextInt();
        System.out.println("Enter the number of columns (m):");
        int m = sc.nextInt();

        int[][] arrA = new int[n][m];
        System.out.println("Enter the elements of matrix A:");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                arrA[i][j] = sc.nextInt();
            }
        }

        int[][] arrB = new int[n][m];
        System.out.println("Enter the elements of matrix B:");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                arrB[i][j] = sc.nextInt();
            }
        }

        int[][] arrC = new int[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                arrC[i][j] = arrA[i][j] + arrB[i][j];
            }
        }

        System.out.println("The sum of the two matrices is:");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                System.out.print(arrC[i][j] + " ");
            }
            System.out.println();
        }
    }
}
