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
        String str="9";//here 9 is a string not a character.Also note that we use capital S for String
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
        //sc.nextLine gets the next line of string from the scanner object


    
        //sc.next() gets the next stream of characters from the scanner object
        //exactly one word
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
    String s=sc.next();
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


//ARRAYS 
//Array is a collection of similar data types of 
//set size.

import java.util.Scanner

public class Main{
    public static void main(String[] args)
    {
        int[] newArr1=new int[5];
        String newArr=new String[2];//this set all elements to null but not initialise
        
        newArr[0]="Hello";
        newArr[1]="Hi";
        System.out.println(newArr[0]);

        String x=newArr[0];
        System.out.println(x);
       
        int[] nums={2,3,54,6,6};

        int y=nums[4];
        System.out.println(y);


        //FOR LOOPS

        int x=5;
        int[] arr={1,5,7,3,4,5};
        for(int i=0;i<=x;i+=x)
        {
            System.out.println(i);

        }
        int[] arr={1,5,7,3,4,5};
        for(int i=0;i<arr.length;i+=x)
        {
            if(arr[i]==5)
            {
               System.out.println("Found a 5! at index"+i);
               //here i will be automatically converted to string because
                //we are using + operator

            }
        
        }

        //FOR EACH LOOP
        //used to loop through list of elements or array

        int[] arr={1,3,5,7};
        String[]arr2= new String[5];
        int count=0;

        for(int element:arr)
        {
            System.out.println(element+" "+" is at index "+count);
            count++;
        }
        //here we dont need to give the length of the array
        //we can use for each loop when we to iterate through the array.
        //the loop starts from index 0 and goes till the end of the array

        //Adding elements to an array using for loop

        String[] names=new String[5];
        Scanner sc=new Scanner(System.in);
        for(int i=0;i<5;i++)
        {  
            System.out.println("Enter a string");
           String input=sc.nextLine();
           names[i]=input;


        }

        //TO print out the inputted string array

        for(String element:names)
        {
            System.out.println(element);
        }

        for(String element1:names)
        {
            System.out.println(element1);
            if(element1.equals("Tim"))
            {
                break;
            }
        }


        //WHILE LOOPS

        public class Main{
            public static void main(String[] args)
            {
                Scanner sc=new Scanner(System.in);
                System.out.print("Type a number");
                int x=sc.nextInt();
                int count=0;
                while(x!=10)
                {       
                        System.out.println("Type 10");
                        System.out.print("Type a number");
                        int x=sc.nextInt();
                        count++;
                }
                System.out.println("You Tried"+" "+count+"Times");



                //DO WHILE LOOP
                
                int x;
                do
                {
                    System.out.print("Type a number");
                      x=sc.nextInt();
                }while(x!=10);

            }


            //SETS AND LISTS
            //they are called collection interface
            //they are used to store multiple values in a single variable
            //they are used when we are not sure of array length
            //SETS

            //set is prefereed to check if it exists 

            
            //sets are used to store unique values
            //sets are unordered
            //sets are not indexed
            //sets are not sorted
            

            import java.util.Set//capital s
            import java.util.Hashset//capital h and s 
           
           Set<Integer> t=new HashSet<Integer>();//name of set is t
              //here we are creating a set of integers

           t.add(5);
           t.add(7);
           t.add(5);//does not add to set
           t.add(9);
           t.add(-8);

           //its not stored in the above order necessarily 
           System.out.println(t);

           //
           boolean x=t.contains(5);
           System.out.println(boolean);

           //To remove 

           t.remove(9);
           System.out.println(t);

           //To clear
           t.clear();

           t.isEmpty();
           int a=t.size();

           //HashSet is a standard set 
           //There is Treeset,LInkedHashSet
           import java.util.TreeSet;
           import java.util.LinkedHashSet;

           Set<Integer> t=new TreeSet<Integer>();
           //in tree set elements are stored in order without index.
            t.add(5);
           t.add(7);
           t.add(5);//does not add to set
           t.add(9);
           t.add(-8);
           System.out.println(t);
           //  [-8 5 7 9] 

           //To create a set from a given set //learn
           given w is existing already
           Set<Integer> t=new HashSet<Integer>(w);

           //LISTS
           import java.util.ArrayList;

           ArrayList<Integer> t=new ArrayList<Integer>();
           //List is  slower
           //we can index position in list
           t.add(1);//position 0 ,1 is the element
           t.add(2);//position 1,2 is the element
           t.get(0);//used to get the element in 0th index of the list
           t.set(1,5);//to use t.set already elements must exist till index
           System.out.println(t);

           // answer is 1,5
           int a=t.size();
           //we can use t.empty

           t.subList(1,3);//used to get the sublist from a list between the range
           //a,b-1 for a,b .So here from 1-2.Provided elements exist already in the 
           // given index

           System.out.println(t.subList(1,3));

           //we also have LinkedLIst

           
          //HASHMAPS and MAPS
          //TREEMAP
          //LINKEDHASHMAP
          //Maps is known as  key value pairs

            import java.util.HashMap;
            import java.util.Map;
            import java.util.TreeMap;

            Map m=new HashMap();
            //here m is the object of the class HashMap
            //HashMap is a class in java.util package
            //HashMap is a standard map
            //HashMap is unordered
            //HashMap is not sorted
            //HashMap is not indexed
            //HashMap is not synchronized
            //HashMap does not allow duplicate keys
            //maps have unique key values

            //we can idex by keys
            //keys can be string ,no,char,float
            //the key links to a value

            m.put("Tim".5);//key,value
            System.out.println(m);

            // {Tim=5} is the answer

            System.out.println(m.get("Tim"));//gets the value of key Tim

            //map is extremely fast

            m.put("Toe"."x");
            m.put(11,999);

            //hashmaps does not retain an order

            Map 
            






            

            
























    }
 




















        




        
    }
 }