import university.department.Staff;
import java.util.Scanner;


public class Test
{
    public static void main(String[] args) {
        Staff object=new Staff();
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the name of the individual:");
        String nameofindividual=sc.nextLine();
        object.print(nameofindividual);



    }
}