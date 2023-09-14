# Method Overloading
- Method overloading is a feature that allows us to have more than one method with the same name, so long as we use different parameters.

```java
class Casio
{
    public void add(int i, int j)
    {
        System.out.println(i+j);
    }
    public void add(int i, int j, int k)
    {
        System.out.println(i+j+k);
    }
    public void add(double i, double j)
    {
        System.out.println(i+j);
    }
}

public class Main
{
    public static void main(String[] args)
    {
        Casio obj = new Casio();
        obj.add(2, 3);
        obj.add(2, 3, 4);
        obj.add(2.5, 3.5);
        
    }
}
```

# Constructor Overloading
- Constructor overloading is a technique in Java in which a class can have any number of constructors that differ in parameter list.
- The compiler differentiates these constructors by taking into account the number of parameters in the list and their type.
```java

class Casio
{
    public Casio()
    {
        System.out.println("In Casio");
    }
    public Casio(int i)
    {
        System.out.println("In Casio int");
    }
    public Casio(int i, int j)
    {
        System.out.println("In Casio int int");
    }
    public Casio(double i, double j)
    {
        System.out.println("In Casio double double");
    }
}

public class Main
{
    public static void main(String[] args)
    {
        Casio obj = new Casio();
        Casio obj1 = new Casio(2);//this creates an object of Casio class with int parameter
        Casio obj2 = new Casio(2, 3);
        Casio obj3 = new Casio(2.5, 3.5);
        
    }
}

```