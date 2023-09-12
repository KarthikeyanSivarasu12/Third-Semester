DATE:  12-09-2023 


class box 
{
    double width;
    double height;
    double depth;
}

box mybox = new box();//here we create a new object of the class box
//box class declares an object of type mybox
//mybox is a reference to the object
//new box() creates an object of type box and returns a reference to the object
//the reference is assigned to mybox


mybox.width = 10;//we use the dot operator to access the instance variables of the class
mybox.height = 20;
mybox.depth = 15;

double volume = mybox.width * mybox.height * mybox.depth;
System.out.println("Volume is " + volume);

we need to save this file as boxdemo.java
then we need to compile it using javac boxdemo.java
then we need to run it using java boxdemo

when we compile the above program, two files are created
boxdemo.class and box.class
boxdemo.class contains the byte code for the boxdemo class
box.class contains the byte code for the box class

//we can create multiple objects of the same class
//each object has its own copy of the instance variables
//each object has its own copy of the instance methods

//we can assign one object to another object of the same class
//when we do this, both the objects will refer to the same instance variables
//this is called object aliasing

box mybox;//we create a reference to an object of type box
mybox = new box();//we create an object of type box and assign its reference to mybox


//Methods
//we can define methods inside a class
//Class has instance variable and methods

type name(parameter list)
{
    body of the method
    return statement
}

class box
{
    double width;
    double height;
    double depth;

    void volume()
    {
        System.out.println("Volume is ");
        System.out.println(width * height * depth);
    }
}
class boxdemo
{
    public static void main(String args[])
    {
        box mybox1 = new box();
        box mybox2 = new box();

        mybox1.width = 10;
        mybox1.height = 20;
        mybox1.depth = 15;

        mybox2.width = 3;
        mybox2.height = 6;
        mybox2.depth = 9;

        mybox1.volume();
        mybox2.volume();
    }
}



