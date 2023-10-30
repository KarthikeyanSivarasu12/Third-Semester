// 5. Use two interfaces and implement the drive() method in Hybrid_Car class .

//Refer slides for diagram

interface CNG
{
    public void cngkit()
    {
        System.out.println("You are driving a cng car with cng kit");
    }
    public void mileage(int a)
    {
        System.out.println("The mileage of the car you are driving is "+a+" kmpl at an average");
    }
    public void drive()
    {
        System.out.println("You are driving a CNG car");
    }
}

interface PETROL
{
    public String mileage(int b,String name)
    {
        String s;
        String s1;
        s="The mileage of the car you are driving is "+b+" kmpl at an average";
        s1="The car is a petrol car named "+name;
        return s;
    }
    public String drive(String name)
    {
        String s;
        s="You are driving a PETROL car with name "+name;
        return s;
    }
}