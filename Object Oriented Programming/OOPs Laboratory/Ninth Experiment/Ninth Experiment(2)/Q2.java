
// 2. Interface, in many way, similar to a class; however, no object can be instantiated from an interface.
// Demonstrate it.

// Define an interface
interface MyInterface {
    void myMethod();
}

// Create a class that implements the interface
class MyClass implements MyInterface {
    @Override
    public void myMethod() {
        System.out.println("Method in MyClass");
    }
}

public class Main {
    public static void main(String[] args) {
        // You cannot create an instance of the interface directly
        // This will result in a compilation error
        // MyInterface myInterfaceObject = new MyInterface(); // Error: Cannot instantiate the type MyInterface

        // Create an object of a class that implements the interface
        MyInterface myInterfaceObject = new MyClass();

        // Call the method implemented in MyClass
        myInterfaceObject.myMethod();
    }
}
