// 6. Design an interface named Stack with the following methods
// a. Push and Pop elements from the stack
// b. Check whether the stack is empty or not. Implement the stack with the help of arrays and if
// the size of the array becomes too small to hold the elements, create a new one. Test this interface by
// inheriting it in its subclass StackTest.java.


import java.util.Scanner;

interface Stack {
    // Method to check the stack status
    void checkStackStatus(int array[], int numberOfElementsInArray, int maxArraySize);
    
    // Method to push an element onto the stack
    void push(int array[], int numberOfElementsInArray, int maxArraySize, int dataToPush);
    
    // Method to pop an element from the stack
    void pop(int array[], int numberOfElementsInArray, int maxArraySize);
}

class StackTest implements Stack {
    public void checkStackStatus(int array[], int numberOfElementsInArray, int maxArraySize) {
        if (numberOfElementsInArray == maxArraySize) {
            System.out.println("The stack is full");
        } else if (numberOfElementsInArray == 0) {
            System.out.println("The stack is empty");
        } else {
            System.out.println("The stack has elements but is not full or empty");
        }
    }
    
    public void push(int array[], int numberOfElementsInArray, int maxArraySize, int dataToPush) {
        if (numberOfElementsInArray == maxArraySize) {
            System.out.println("The stack is full");
        } else {
            System.out.println("Enter the data to be pushed:");
            Scanner sc = new Scanner(System.in);
            int dataToBePushed = sc.nextInt();
            array[numberOfElementsInArray] = dataToBePushed;
            numberOfElementsInArray++;
        }
    }
    
    public void pop(int array[], int numberOfElementsInArray, int maxArraySize) {
        if (numberOfElementsInArray == 0) {
            System.out.println("The stack is empty");
        } else {
            System.out.println("The popped element is " + array[numberOfElementsInArray - 1]);
            numberOfElementsInArray--;
        }
    }

    public static void main(String[] args) {
        StackTest object = new StackTest();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the maximum size of the array to be created:");
        int maxArraySize = sc.nextInt();
        int array[] = new int[maxArraySize];
        System.out.println("Enter the number of elements in the array:");
        int numberOfElementsInArray = sc.nextInt();

        for (int i = 0; i < numberOfElementsInArray; i++) {
            System.out.println("Enter the element " + (i + 1) + " of the array:");
            int dataInArray = sc.nextInt();
            array[i] = dataInArray;
        }

        System.out.println("Enter the number of pushes to be performed on the stack:");
        int numberOfPushes = sc.nextInt();
        for (int i = 0; i < numberOfPushes; i++) {
            System.out.println("Enter the data to be pushed:");
            int dataToPush = sc.nextInt();
            object.push(array, numberOfElementsInArray, maxArraySize, dataToPush);
        }

        System.out.println("Enter the number of pops to be performed on the stack:");
        int numberOfPops = sc.nextInt();
        for (int i = 0; i < numberOfPops; i++) {
            object.pop(array, numberOfElementsInArray, maxArraySize);
        }
        object.checkStackStatus(array, numberOfElementsInArray, maxArraySize);
    }
}
