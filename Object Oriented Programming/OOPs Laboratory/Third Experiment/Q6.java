// For the given integer just print the sum of all even digits and odd digits separately. 
     Eg:  Input : 1234
     Output  : 6 ( Sum of even numbers)
      4 (Sum of odd numbers)

public class Q6
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        String a=sc.nextLine();
        int sumeven;
        int sumodd;


        for(int i=0;i<a.length();i++)
        {
            if((parseInt(a[i]))%2==0)
            {
                sumeven+=parseInt(a[i]);

            }
            else
            {
                sumodd+=parseInt(a[i]);
            }
        }
        System.out.println("Sum of odd numbers:"+" "+sumodd);
        System.out.println("Sum of even numbers:"+" "+sumeven);


    }  
}
