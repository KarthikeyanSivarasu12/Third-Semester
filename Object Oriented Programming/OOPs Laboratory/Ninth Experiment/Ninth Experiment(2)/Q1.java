// 1. illustrate the use of interface technique

//Refer slides for Diagram

// Teacher and Student are two classes each of them having their own unique components. You want to
// define an interface, say, Resume which will include all the components both in Teacher and Student.

interface Resume
{
    String Qualification(String Q);
    int Experience(int E);
    String Branch(String B);
    String Result(String R);
}

class Teacher implements Resume
{
    public String Qualification(String Q)
    {
        System.out.println("The qualification of the teacher is:"+" "+Q);
    }
    public int Experience(int E)
    {
        System.out.println("The experience of the teacher is:"+" "+E);
    }
}

class Student implements Resume
{
    public String Branch(String B)
    {
        System.out.println("The branch of the student is:"+" "+B);
    }
    public String Result(String R)
    {
        System.out.println("The result of the student is:"+" "+R);
    }
}


class Testinterface
{
    public static void main(String[] args) {
        Teacher teacher=new Teacher();
        Student student=new Student();
        teacher.Qualification("M.Tech");
        teacher.Experience(5);
        student.Branch("CSE");
        student.Result("First Class");
        
    }
}