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
        AccountNo = String.valueOf(Math.abs(random.nextInt()));
        // int randomNumber = random.nextInt(Integer.MAX_VALUE);
        // way to get positive random number...
    }

    void InitiateBankAccout() {
        System.out.println("__Welcome to Account creation__\n");
        System.out.print("which type of AC you wanna create: \n");
        System.out.print("(1) Savings\n(2) Current\n en choice? ");
        Scanner sc = new Scanner(System.in);
        while (sc.hasNextInt()) {
            int key = sc.nextInt();
            if (key > 2) {
                System.out.println("en proper choice");
            } else {
                AccountType = key == 1 ? "Savings" : "Current";
                break;
            }
        }
        sc.nextLine();// cleans previous buffer..
        System.out.println("Enter your name: ");
        NameOfDepositor = sc.nextLine();
        accountnogenerator();
        Balance = 0.0;
        sc.close();// free scanner..
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
        System.out.println("what do you want to..");
        Scanner sc = new Scanner(System.in);
        int flag = 1;
        while (flag == 1) {
            int choice = 0;
            choice = sc.nextInt();
            switch (choice) {
                case 1:
                    myAccount.InitiateBankAccout();
                    System.out.println("account created");
                    break;
                case 2:
                    myAccount.DisplayAC_details();
                    break;
                case 3:
                    flag = 3;
                    System.out.println("quit");
                    break;
                default:
                    System.out.println("enter proper choice");
                    break;
            }
        }
        sc.close();
    }
}
