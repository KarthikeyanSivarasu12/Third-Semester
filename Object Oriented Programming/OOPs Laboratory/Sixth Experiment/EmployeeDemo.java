// 1.Create a class Employee with the following details.
// The data members are name,address, age, gender and 
//the method display() to show employee details.


//THE FILE NAME MUST BE THE classname.java amd this class name refers to 
//that class which contains the main method


import java.util.Scanner;

class Employee
{
    String name;
    String address;
    int age;
    String gender;

    void display()
    {
        System.out.println("Name: "+name);
        System.out.println("Address: "+address);
        System.out.println("Age: "+age);
        System.out.println("Gender: "+gender);
    }
}


public class EmployeeDemo
{
    public static void main(String[] args) {
        Employee e1=new Employee();
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the name of the employee: "); 
        String a =sc.nextLine();
        e1.name=a;
        System.out.println("Enter the address of the employee: ");
        String b =sc.nextLine();
        e1.address=b;
        System.out.println("Enter the age of the employee: ");
        int c =sc.nextInt();
        e1.age=c;
        sc.nextLine();
        
        System.out.println("Enter the gender of the employee: ");
        String d=sc.nextLine();
        e1.gender=d;
        e1.display();


        

        
    }
}