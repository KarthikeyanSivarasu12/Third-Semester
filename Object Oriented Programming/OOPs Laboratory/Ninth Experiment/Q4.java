// Create user defined package university
//      create the department sub-packages in Java.
//      creates class Staff inside department sub package within university package.
//     using the keyword “import”, add the user-defined packages in Java.

package university.department;

public class Staff
{
    private String name;

    public void print(String nameofperson)
    {
        name=nameofperson;
        System.out.println("The name of the staff is:"+" "+name);
    }
   
}