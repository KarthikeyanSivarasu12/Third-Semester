//OBJECT ORIENTED PROGRAMMING

public class Lecture1
{
    public static void main(String[] args) 
    {
        //Store 5 roll numbers
        int[] numbers=new int[5];
        //Store 5 names
        String[] names=new String[5];

        //Store the data of 5 students.Every student has roll no,names ,marks

        int[]rollno=new int[5];
        String[] name=new String[5];
        float[] marks=new float[5];
        
        //To have data structure where every single elements contains all 3

        //A class is anamed group of properties and functions
        //we can create own datatype using classes

        Student[] students=new Student[5];
        //every single element in this array should contain 
        //all the properties

        // Student kunal;
        // //kunal is a reference variable of type student 
        // //the data type is student
        // //kunal is a variable of type student
        // //kunal has 3 properties rollno,name,marks
         
        //   kunal =new Student();
        //   //new student() is a constructor

          //we can also have
          Student kunal=new Student();
          System.out.println(kunal);
          //this gives objects hashcode whcih is unique for every object

          System.out.println(kunal.rollno);
          //this gives the default value of rollno which is 0
            System.out.println(kunal.name);
            //this gives the default value of name which is null
            System.out.println(kunal.marks);
            //this gives the default value of marks which is 0.0

            //for primitive data types we have default values as 0
            //for string we have default value as null

            //if in the class template we initialised marks=90 then the output will be 90.0
            //regardless of the object name

              


            kunal.rollno=13;
            kunal.name="Kunal Kushwaha";
            kunal.marks=88.5f;
            System.out.println(kunal.rollno);
            System.out.println(kunal.name);
            System.out.println(kunal.marks);



    }
}


    //Create a class
    //TEMPLATE
    //This student class is outside the main class
    //This is a template for creating objects
    //for every single student
    class Student
    {
        
        int rollno;
        String name;
        float marks;


        

         void greeting()
            {
                System.out.println("Hello my name is "+name);
                //op will be Hello my name is null when we dont initialise name in the class template and also 
                //we dont define the student method inside the class template


                //op will be Hello my name is Kunal Kushwaha when we initialise name in the class template
                //or we define the student method inside the class template





                System.out.println("My roll no is "+this.name);
                // when we use this.name it means the name of the object

                //when give kunal.greeting() then what happens is that this.name is replaced by 
                //kunal.name as this keyword is used to access the reference variable of the object
                //which is calling the function

                //so output will be
                //Hello my name is Kunal Kushwaha



                //SO THEREFORE WHEN WE JUST GIVE NAME THEN IT GIVES THE DEFAULT VALUE OF NAME
                //WHEN WE GIVE THIS.NAME THEN IT GIVES THE NAME OF THE OBJECT WHICH IS CALLING THE FUNCTION
         }



        void changeName(String newname)
        {
            name=newname;
            //what this function does is that it changes the name of the object which is calling the function
            //to the newname which is passed as a parameter
        }


        //we need a way to add values to the above properties object 
        //by object

        //we need one word to access every object 

        Student() //return type is nothing but the class itself as it creates an object of type Student

        {
            this.rno=13;
            this.name="Kunal Kushwaha";
            this.marks=88.5f;
        }
    }


    //this creates a new datatype called student which contains 3 properties
    //rollno,name,marks
    






// public class Main
// {
// 	public static void main(String[] args) {
	
	
// 	   Student kunal=new Student();
// 	   System.out.println(kunal);
	   
// 	   kunal.greeting();
// 	}
// }

// class Student
// {
//     int rollno;
//     String name;
//     float marks;
    
//     void changename(String newname)
//     {
//         name=newname;
//     }
    
//     void greeting()
//     {
//         System.out.println("S"+" "+this.name);
//     }
// }
