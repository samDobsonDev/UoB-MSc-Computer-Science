public class BankAccount{
  // fields
  private String firstName;
  private String lastName;
  private int accountNumber;
  private double balance;
  private int accountPin;
  
  // constructor
  public BankAccount(String firstName, String lastName){
    this.firstName = firstName;
    this.lastName = lastName;
    //set accountNumber to a random 8-digit number
    this.accountNumber = (int)(Math.random()*100000000);
    this.balance = 0.0;
    this.accountPin = (int)(Math.random()*10000);
  }
  
  // accessors (getters)
  public String getAccountHolder(){
    return firstName + " " + lastName;
  }

  public int getAccountNumber(){
    return accountNumber;
  }

  public String getBalance(){
    String balanceString = String.format("%.2f", balance);
    return "£" + balanceString;
  }

  public int getPin(){
    return accountPin;
  }

  // mutators (setters)
  public void deposit(double amount){
    balance = balance + amount;
    System.out.println("£" + amount + " has been deposited into account number " + accountNumber + ". The new account total is " + balance);
  }

  public void withdraw(double amount){
    balance = balance - amount;
    System.out.println("£" + amount + " has been withdrawn from account number " + accountNumber + ". The new account total is " + balance);
  }
}
