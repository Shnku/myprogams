import java.io.Console;
import java.io.PrintStream;
import java.util.Random;
import java.util.Scanner;

class BankAccount {
    String NameOfDepositor;
    String AccountNo;
    String AccountType;
    Double Balance;
    String[] listOptiion = { "CreateAC", "AC_Details", "Withdraw", "Diposite", "quit" };

    void accountnogenerator() {
        Random random = new Random();
        AccountNo = String.valueOf(Math.abs(random.nextInt()));
        // int randomNumber = random.nextInt(Integer.MAX_VALUE);
        // way to get positive random number...
    }

    void InitiateBankAccout() {
        System.out.println("which type of AC you wanna create:--");
        System.out.print("(1) Savings\n(2) Current\n en choice? ");
        // Scanner sc = new Scanner(System.in);
        Console input = System.console();
        // while (sc.hasNextInt()) {
        // int key = sc.nextInt();
        // if (key > 2) {
        // System.out.println("en proper choice");
        // } else {
        // AccountType = key == 1 ? "Savings" : "Current";
        // break;
        // }
        // }
        int key = Integer.parseInt(input.readLine());
        AccountType = key == 1 ? "Savings" : "Current";
        // sc.nextLine();// cleans previous buffer..
        System.out.print("Enter your name: ");
        NameOfDepositor = input.readLine();
        accountnogenerator();
        Balance = 0.0;
        // sc.close();// free scanner..
    }

    void Diposite() {
        Console in = System.console();
        System.out.print("en amount :");
        double money = Double.parseDouble(in.readLine());
        Balance += money;
    }

    void Withdraw() {
        Console in = System.console();
        System.out.print("en amount :");
        double money = Double.parseDouble(in.readLine());
        Balance -= money;
    }

    void DisplayAC_details() {
        PrintStream sout = new PrintStream(System.out);
        sout.println("-----------------------------------");
        sout.printf("| AccountNo: %-20s |\n| ", AccountNo);
        sout.printf("Name: %-25s | \n| AC Type: %-22s |\n", NameOfDepositor, AccountType);
        sout.println("-----------------------------------\nCurrent Balance is: " + Balance);
    }

    void Choose_option() {
        System.out.println("what do you want to..");
        for (int i = 0; i < listOptiion.length; i++) {
            System.out.printf("(%d) %s\n", i + 1, listOptiion[i]);
        }
        System.out.println("en choice: ");
        int choice;
        try (Scanner coin = new Scanner(System.in)) {
            choice = coin.nextInt();
        }
        while (true) {
            switch (choice) {
                case 1:
                    InitiateBankAccout();
                    System.out.println("account created");
                    continue;
                case 2:
                    DisplayAC_details();
                    continue;
                case 3:
                    Withdraw();
                    continue;
                case 4:
                    Diposite();
                    continue;
                case 5:
                    System.out.println("exit");
                    System.exit(0);
                default:
                    System.out.println("enter proper choice");
                    continue;
            }
        }
    }
}

public class BankAccoutMain {
    public static void main(String[] cmd_line_args) {
        BankAccount myAccount = new BankAccount();
        myAccount.Choose_option();

    }
}

// !error...

/*
 * what do you want to..
 * (1) CreateAC
 * (2) AC_Details
 * (3) Withdraw
 * (4) Diposite
 * (5) quit
 * en choice:
 * 1
 * which type of AC you wanna create:--
 * (1) Savings
 * (2) Current
 * en choice? Exception in thread "main" java.lang.NullPointerException: Cannot
 * invoke "java.io.Console.readLine()" because "<local1>" is null
 * at BankAccount.InitiateBankAccout(BankAccoutMain.java:34)
 * at BankAccount.Choose_option(BankAccoutMain.java:79)
 * at BankAccoutMain.main(BankAccoutMain.java:105)
 */
