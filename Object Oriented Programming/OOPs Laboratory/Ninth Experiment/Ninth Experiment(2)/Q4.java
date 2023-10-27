// 4. An interface is a significant feature in Java in the sense that it enables the multiple inheritance.
// Implement the same
// Illustrate class A which &quot;implements&quot; two interfaces ( I1 and I2)
//Refer  slides for diagram
// Define the first interface (One)
interface One {
    String display(String name);
}

// Define the second interface (Two)
interface Two {
    String show(String name);
}

// Create a class (Check) that implements both interfaces
class Check implements One, Two {
    // Implement the display method from interface One
    @Override
    public String display(String name) {
        return name;
    }

    // Implement the show method from interface Two
    @Override
    public String show(String name) {
        return name;
    }
}

public class TestMultipleInheritance {
    public static void main(String[] args) {
        Check object = new Check();
        System.out.println(object.display("Rahul"));
        System.out.println(object.show("Arun"));
    }
}
