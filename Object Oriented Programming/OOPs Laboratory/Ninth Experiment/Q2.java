// 2. 

// create a class A in learnjava package that access it in another class B by using import keyword.

package learnjava;
import learnjava.A;

class A 
{
    void print()
    {
    System.out.println("This is a class in learn java package");
    }
}

public class B 
{
    public static void main(String[] args) {
        A object=new A();
        object.void();
    }
    
}


