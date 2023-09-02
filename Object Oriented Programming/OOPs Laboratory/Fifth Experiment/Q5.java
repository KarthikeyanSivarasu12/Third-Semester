//  Write a java program to Insert an element in the array.
// EG; Enter number of elements of the array : 5
//        Enter element 1 : 10
//        Enter element 2 : 20
//         Enter element 3 : 30
//        Enter element 4 : 40
//        Enter element 5 : 50

// Enter the position where you want to insert element : 2
// Enter the element you want to insert : 60
// After inserting : 10 60 20 30 40 50

package OOPs Laboratory.Fifth Experiment;

public class Q5 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
          System.out.println("Enter the number off elements in the array");
          int n=sc.nextInt();
          int sum=0;

          int[] arr=new int[n];
          for(int i=0;i<arr.length;i++)
          {
               System.out.println("Enter the element at index "+i);
               arr[i]=sc.nextInt();
          }

          System.out.println("Enter the position you want to insert the elment:");
          int a=sc.nextInt();
          System.out.println("Enter the element to be inserted:");
          int b=sc.nextInt();

          for(int i=0;i<n;i++)
          {
            
          }



        
    }
    
}
