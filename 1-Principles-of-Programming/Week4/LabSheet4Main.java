
/* 
 * Lab Sheet 4
 */

/* Question 1
 Make a BankAccount Class. This Class should provide a constructor, three mutators and three accessors of the type that a bank account might need. 
 
 In the Main class (i.e. this class) create two different BankAccount instances from its main method (i.e. two BankAccount objects). Demonstrate the use of your mutators and accessors within that same main method.
*/

class Main {
  public static void main(String[] args) {
    BankAccount currentAccount = new BankAccount("Sam", "Dobson");

    System.out.println("Account Holder: " + currentAccount.getAccountHolder());
    System.out.println("Account Number: " + currentAccount.getAccountNumber());
    System.out.println("Account Balance: " + currentAccount.getBalance());
    System.out.println("Account Pin: " + currentAccount.getPin());
    
    currentAccount.deposit(500);
    currentAccount.withdraw(250);
  }
}
