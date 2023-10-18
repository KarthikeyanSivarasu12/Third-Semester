// Create an Abstract class named Library Management that has functions for getting the
// book name and display the names of the books. There are two derived classes, Issue and
// Return. 

//These classes have decrement and increment functions. The user can take or
// return books. Update the system accordingly. Include provision for searching for a book.

abstract class LibraryManagement
{
   String bookname;
   abstract void getbookname(String bookname);
   abstract void displaybookname();
}

class Issue extends LibraryManagement
{
   void getbookname(String bookname)
   {
      this.bookname=bookname;
   }
   void displaybookname()
   {
      System.out.println("Book name is"+" "+bookname);
   }
   void decrement()
   {
      System.out.println("Book is issued");
   }
}

class Return extends LibraryManagement
{
   void getbookname(String bookname)
   {
      this.bookname=bookname;
   }
   void displaybookname()
   {
      System.out.println("Book name is"+" "+bookname);
   }
   void increment()
   {
      System.out.println("Book is returned");
   }
}

class Q2
{
   public static void main(String args[])
   {
      Issue i=new Issue();
      Return r=new Return();
      i.getbookname("Harry Potter");
      i.displaybookname();
      i.decrement();
      r.getbookname("Harry Potter");
      r.displaybookname();
      r.increment();
   }
}