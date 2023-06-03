import java.io.PrintStream;

class BankAccount {
    String NameOfDepositor;
    String AccountNo;
    String AccountType;
    Double Balance;

    BankAccount(String n, String at) {
        this.NameOfDepositor = n;
        this.AccountType = at;
    }

    BankAccount() {
    }

    void InitiateBankAccout() {

    }

    void DisplayAC_details() {
        PrintStream sout = new PrintStream(System.out);
        sout.println("----------------------");
        sout.printf("| AccountNo: %s\n| Name: %s, \n| AC Type: %s\n", AccountNo, NameOfDepositor, AccountType);
        sout.println("-----------------------\nCurrent Balance is: " + Balance);
    }
}

public class BankAccoutMain {
    public static void main(String[] cmd_line_args) {

        BankAccount myAccount = new BankAccount();
        myAccount.InitiateBankAccout();
        myAccount.DisplayAC_details();
    }
}
