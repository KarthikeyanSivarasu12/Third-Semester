//  Create classes that capture bank customers and bank accounts.
//  A customer has a first and last name.An account has a customer and balance.
//  Make objects for two accounts held by the same customer.


class Customer
{
    String fname;
    String lname;

    Customer(String f,String l)
    {
        fname=f;
        lname=l;
    }
}

class Account
{
    Customer holder;
    double balance;

    Account(customer holder,double balance)
    {
       
    }
}

public class BankDemo {
    public static void main(String[] args) {
        Account a1=new Account();
        Account a2=new Account();

        
    }
    
}
