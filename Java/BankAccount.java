public class BankAccount	
{
    private  String name;
    private  int balance;
    private  int accountidnum;
    public BankAccount()
    {
	name = "";
	balance = 0;
	accountidnum = 0;
    }
    public BankAccount(String name, int balance, int accountidnum) // parameters are not the same as private data types)
    { 
	name = name;
    balance = balance;
    accountidnum = accountidnum;
    }
    public BankAccount(BankAccount b)
    {
	name = b.name;
	balance = b.balance;
	accountidnum = b.accountidnum;
    }
    public void Summary()
    {
	System.out.println(name);
	System.out.println(balance);
	System.out.println(accountidnum);
    }
    public void setName(String n)
    {
	name = n;
    }
    // or you can create seperate methods for each thing to be printed.  However, you would have to make them all return instead of println, and instead of returning void, it is going to return string for name, and int for balance and accountidnum
}// BankAccount()

