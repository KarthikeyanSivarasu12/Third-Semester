 //Java is an object-oriented programming language
 //That means everything happens inside 
 //of classes and objects.

 //everything in java is written 
 //in a class.
 //Inside a class we have methods and variables.
 //Methods are functions that do something.
 //the code given inside a method is executed when the method is called.

 public class Main
 {
    public static void main(String[] args)
    {
        // TO PRINT SOMETHING ON THE SCREEN
        //println is print line
        System.out.println("Hello World!");

        //VARIABLES
       
        //Primitive data types
        int hello_world=5;
        double num2=5.0;//Anything with a decimal is a double
        boolean b=true;//true or false
        char c='a';//single character
        char c1='9'//here 9 is a character not a number
        char c2=65;//here 65 represents the character A(UNICODE)
        
        //always for character we can use single quotes and only have one character
        //Non-primitive data types
        String str="9";//here 9 is a string not a character
        String str2="725tim";
        System.out.println(hello_world);
        System.out.println(str1);

        int tim=hello_world
        System.out.println(tim);

        //Another way of creating variable

        char x;
        x='a';
        System.out.println(x);
        
        //Operataions 

        int x=5;
        int y=7;
        int z=56;
        int sum;
        double u=z/y;

        sum=x+y+z;  //4 basic operations
        sum=(x-(y-1))/z; //Parenthesis gets executed first
        System.out.println(sum);
        System.out.println(sum);
        System.out.println(u);
        
        double d=Math.pow(x,y);
        //x,y are int and result always for exponent is double
        
        
        
        //since both are int it just coverts the int ans to double
        //so if one is operand a double or both are double then we get ans in double
        //provide the variable where you store is of double

        //int e= y*z ;
        //y double and z is int then we cannot perform as we need type casting
        //but if we give resut data type as double then it takes converts double*int as double.


        //Type casting

        int x=5;
        int y=7;
        double u=x/(double)y;

        int a=56%5;// remainder 1 is result 




        //Input and Scanner

        // WE ADD import java.util.Scanner; at the top (ie outside the class)

        Scanner sc=new Scanner(System.in);
        //here Scanner is the data type and sc is the variable name
        //System.in is the input stream
        //sc is the object of the class Scanner
        //new is the keyword used to create an object
        //Scanner() is the constructor of the class Scanner
        //Scanner is a class in java.util package

        //To use the scanner object we use the dot operator

        String scanned=sc.next();
        //the string is stored in scanned variable after getting scanned from the scanner object

    
        //sc.next() gets the next stream of characters from the scanner object
        //sc.next()gives us a string
        //sc.nextInt() gives us an integer
        //sc.nextDouble() gives us a double
        //sc.nextBoolean() gives us a boolean
        //sc.nextChar() gives us a character
        //sc.nextLine() gives us a line of string

        System.out.println(scanned);


        Scanner sc1=new Scanner(System.in);
        int x=sc1.nextInt();
        System.out.println(x);

        Scanner sc2=new Scanner(System.in);
        boolean a=sc2.nextBoolean();//only true or false(ie lowercase)
        System.out.println(a);

        Scaanner sc4=new Scanner(System.in);
        double b=sc4.nextDouble();
        system.out.println(b);//altough you give int as ip it converts to double


    //To convert a string input to other data type

    Scanner sc=new Scanner(System.in);
    String scanned=sc.next();
    int x=Integer.parseInt(scanned);
    System.out.println(x);
    //parseInt is a method in the Integer class
    //parseInt converts a string to an integer
    //parseInt takes a string as input and returns an integer

    //ip string must be a number or else it wont work
    //if we had give int scanned=sc.nextInt()
    //and then int x=Integer.parseInt(scanned); it would have worked

    //Conditions and Booleans 

    int x=6;
    int y=7;
    int z=10;

    //> < == >= <= !=
    boolean compare=x<y;
    System.out.println(compare);//true


    //for strings

    //only !=

    //for numbers
    // && is the and operator,|| is the or operator

    Scanner sc=new Scanner(Scanner.in);
    String s=sc.next();
    s.equals("Hello");// compare s with hello



    // IF,ELSE,ELIF Statements


    Scanner sc=new Scanner(System.in);
    String a=sc.next();
    if(s.equals("Tim"))
    {
        System.out.print("You typed tim");
    } 
    else if(s.equals("Hello"))
    {
           System.out.print("You  typed Hello");
    }
    else
    {
        System.out.print("You dindt type tim");
    }

    //elif and if can exist without else


    //RECAP


import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        System.out.println("Enter your age:");
        Scanner sc = new Scanner(System.in);
        String a = sc.nextLine();
        int age = Integer.parseInt(a);

        if (age > 18) {
            System.out.println("Your favorite food:");
            String food = sc.nextLine();
            if (food.equals("Pizza")) {
                System.out.println("Mine too");
            } else {
                System.out.println("Not Mine");
            }
        } else if (age >= 13) {
            System.out.println("You are not an adult");
        } else {
            System.out.println("You are too young");
        }
    }
}



















        




        
    }
 }