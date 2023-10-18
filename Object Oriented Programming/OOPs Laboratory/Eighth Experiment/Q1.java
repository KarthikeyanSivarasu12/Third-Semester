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
   
   abstract void withdrawal();
   abstract void deposit();

   void display()
   {
      System.out.println("Balance is"+" "+accountholdersname);
   }
}


