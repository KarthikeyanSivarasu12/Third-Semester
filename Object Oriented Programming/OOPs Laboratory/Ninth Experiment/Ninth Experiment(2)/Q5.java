// 5. Use two interfaces and implement the drive() method in Hybrid_Car class .

//Refer slides for diagram
import java.util.Scanner;

interface CNG {
    void cngkit();
    void mileage(int a);
    void drive();
}

interface PETROL {
    void petrolkit();
    String mileage(int b, String name);
    String drive(String name);
}

class Testinterface implements CNG, PETROL {
    public void cngkit() {
        System.out.println("You are driving a CNG car with CNG kit");
    }

    public void mileage(int a) {
        System.out.println("The mileage of the car you are driving is " + a + " kmpl at an average");
    }

    public void drive() {
        System.out.println("You are driving a CNG car");
    }

    public void petrolkit() {
        System.out.println("You are driving a car with a petrol kit");
    }

    public String mileage(int b, String name) {
        String s = "The mileage of the car you are driving is " + b + " kmpl at an average";
        String s1 = "The car is a petrol car named " + name;
        return s + " " + s1;
    }

    public String drive(String name) {
        return "You are driving a PETROL car with name " + name;
    }

    public static void main(String[] args) {
        Testinterface object = new Testinterface();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the name of the car:");
        String nameofcar = sc.nextLine();
        System.out.println("Enter the mileage of the car:");
        int mileageofcar = sc.nextInt();
        object.cngkit();
        object.mileage(mileageofcar);
        object.drive();
        object.petrolkit();
        object.mileage(mileageofcar, nameofcar);
        object.drive(nameofcar);
    }
}
