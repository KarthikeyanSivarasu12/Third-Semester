//Java allows two or more statements to be grouped into blocks of code ,
//also called code blocks. A block can be a target for  Java's if and for statements.
// Write a program that uses a block od code as a target of a for loop and generate output as follows 
//  x : 0
// y: 20
// x:1
// y: 18
// x:2
// y: 16
// .
// .
// .
// x:9
// y:2


public class Q1 {
    public static void main(String[] args) {
        int y = 20;

        for (int x = 0; x <= 9; x++) {
            System.out.println("x: " + x);
            System.out.println("y: " + y);
            y -= 2;
        }
    }
}
