import java.io.PrintStream;
import java.util.Random;
import java.util.Scanner;

class BankAccount {
    String NameOfDepositor;
    String AccountNo;
    String AccountType;
    Double Balance;

    void accountnogenerator() {
        Random random = new Random();
        AccountNo = String.valueOf(random.nextInt());
    }

    void InitiateBankAccout() {
        System.out.println("__Welcome to Account creation__");
        System.out.print("which type of AC you wanna create: ");
        Scanner sc = new Scanner(System.in);
        AccountType = sc.nextLine();
        System.out.println("Enter your name: ");
        NameOfDepositor = sc.nextLine();
        sc.close();
        accountnogenerator();
        Balance = 0.0;
    }

    boolean Diposite(double money) {
        if ((Balance += money) != null)
            return true;
        return false;
    }

    boolean Withdraw(double money) {
        return (Balance -= money) != null;
    }

    void DisplayAC_details() {
        PrintStream sout = new PrintStream(System.out);
        sout.println("-----------------------------------");
        sout.printf("| AccountNo: %-20s |\n| ", AccountNo);
        sout.printf("Name: %-25s | \n| AC Type: %-22s |\n", NameOfDepositor, AccountType);
        sout.println("-----------------------------------\nCurrent Balance is: " + Balance);
    }
}

public class BankAccoutMain {
    public static void main(String[] cmd_line_args) {
        BankAccount myAccount = new BankAccount();
        myAccount.InitiateBankAccout();
        myAccount.DisplayAC_details();
    }
}
