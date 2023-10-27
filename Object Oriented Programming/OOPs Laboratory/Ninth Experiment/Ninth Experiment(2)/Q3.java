// 2. Interface, in many way, similar to a class; however, no object can be instantiated from an interface.
// Demonstrate it.
//Refer slides for diagram

interface l1
{
    void print();
}

interface l2 extends l1
{
    void show();
}


class Check implements l2
{
    void show()
    {
        System.out.println("This is a method in interface l2");
    }

    void print()
    {
        System.out.println("This is a method in interface l1");
    }
}

public class Test
{
    public static void main(String[] args) {
        Check object=new Check();
        // we can also  Create an object of the Check class and reference it with the l2 interface
        // l2 object=new Check();
        object.show();
        object.print();
    }
}
