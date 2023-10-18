// 1) Create an Abstract class Accounts with the following details
// Data members:
// a) Balance
// b) Account number
// c) Account holders name
// d) Address

// Methods:
// a) withdrawal() – abstract
// b) deposit() – abstract
// c) display() – to show the balance of the account number

// Create a subclass of this class SavingsAccount and add the following details
// Data members:
// a) rateofInterest
// Methods:
// a) calculateAmount()

abstract class Accounts
{
   float balance;
   int accountnumber;
   String accountholdersname;
   String address;
   
   abstract void withdrawal(double amount);
   abstract void deposit(double amount);

   void display()
   {
      System.out.println("Balance is"+" "+accountholdersname);
   }
}


class SavingsAccount extends Accounts
{
   float rateofInterest;
   void calculateAmount(float rateofInterest)
   {
      double amount=balance+(balance*rateofInterest/100);
   }
   void withdrawal(double amount)
   {
      double newbalance=balance-amount;
      System.out.println("Withdrawal of amount"+" "+amount+" "+"is successful");
   }
   void deposit(double amount)
   {
      double newbalance=balance+amount;
      System.out.println("Deposit of amount"+" "+amount+" "+"is successful");
   }
   

}

class Q1
{
   public static void main(String args[])
   {
      SavingsAccount s=new SavingsAccount();
      s.withdrawal(1000);
      s.deposit(1000);

   }
}





