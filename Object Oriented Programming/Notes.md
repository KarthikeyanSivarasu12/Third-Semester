//OPERTAORS

//Compound assignment operators in java
//+=, -=, *=, /=, %=, &=, |=, ^=, >>=, <<=, >>>=

//a=a+4;
//a+=4;
//the above is same and an example of compound assignment operator

//arithmetics operators
// +, -, *, /, %, ++, --    

//num-=1;
//num=num-1;

//num*=1;
//num=num*1;

//num/=1;
//num=num/1;

//num%=1;
//num=num%1;

//num1++ is equivalent to num1=num1+1 or num1+=1.All these are same
//num1-- is equivalent to num1=num1-1 or num1-=1.All these are same

//POST AND PRE INCREMENT AND DECREMENT
//int a=1;
//int b=++a; //pre increment
//int c=a++; //post increment
//int d=--a; //pre decrement
//int e=a--; //post decrement
// in pre increment and decrement the value is first incremented or decremented and then assigned to the variable.That is 
//in pre increment and decrement the value is first changed and then assigned to the variable

//RELATIONAL OPERATORS
// ==, !=, >, <, >=, <=

//LOGICAL OPERATORS
// &&, ||, !
//these are used to combine two or more conditions.That is to compare two or more relational operators

//ARRAYS
//Multidemisional arrays in java
//multidimesional arrays are arrays of arrays
//data is stored in row and column format(ie a tabular format)and in row major order

// int [][] a=new int[3][3];
// int [][] a={{1,2,3},{4,5,6},{7,8,9}};
//for 3d arrays
// int [][][] a=new int[3][3][3];
// int [][][] a={{{1,2,3},{4,5,6},{7,8,9}},{{10,11,12},{13,14,15},{16,17,18}},{{19,20,21},{22,23,24},{25,26,27}}};

//int [][]x=new int[3][3];
//this array can store 3 rows and 3 columns


//we use reduction framework to reduce the number of loops in a program and also grow the size of the array
//in order to overcome the limitations of arrays we use arraylist


you can copy array an array to another array using Arrays.copyOf() method
For example: int[] copyFrom = {1, 2, 3, 4, 5, 6};
             int[] copyTo = Arrays.copyOf(copyFrom, 10);
cloning of arrays is done using clone() method. For example: int[] copyFrom = {1, 2, 3, 4, 5, 6};
             int[] copyTo = copyFrom.clone();
Concept of classes and objects in java:
classes:
classes are user defined data types. They are used to create objects. They are also called as blueprints of objects.
To create a class we use the keyword class.

objects:
objects are instances of classes. They are used to access the members of the class. They are also called as variables of the class.
Eg: class student
    {
    int rollno;
    String name;
    }
    student s1=new student();
    s1.rollno=1;
    s1.name="abc";
    System.out.println(s1.rollno+" "+s1.name);
    student s2=new student();
    s2.rollno=2;
    s2.name="xyz";
    System.out.println(s2.rollno+" "+s2.name);
    In the above example student is a class and s1 and s2 are objects of the class student.
    s1 and s2 are used to access the members of the class student.
    s1 and s2 are also called as variables of the class student.
    s1 and s2 are also called as instances of the class stude
    In the above example rollno and name are the members of the class student.
methods:
methods are used to perform certain actions. They are also called as functions.
Eg: 


Class name is always written in camel case.
it is the name given to the class.
it is always written in capital letter.
it is always written after the keyword class.
it is always written before the body of the class.

two types of classes in java:
1)user defined classes
2)predefined classes(pre defined classes are also called as library classes or built in classes)

# Creating a class in java

```java
    class classname
    {
        //body of the class
    }
```

# Creating an object in java

```java
    classname objectname=new classname();
```


- behaviour of an object is defined by the methods of the class.
- methods are also called as functions.
- methods are used to perform certain actions.
- states are defined by the variables of the class.

//Create a program which has one class and many objects

# h1
## h2
### h3
#### h4
##### h5
###### h6

paragraphs are written in normal text

- bullet points are written using hyphen
- bullet points are written using hyphen

1. numbered list is written using numbers
1. numbered list is written using numbers
1. numbered list is written using numbers
1. numbered list is written using numbers
1. numbered list is written using numbers
1. numbered list is written using numbers
1. numbered list is written using numbers
1. numbered list is written using numbers

---

```json
{
    "name":"abc",
    "age":20,
    "rollno":1
}
```
print("hello world")
```

```


[google](https://www.google.com)

