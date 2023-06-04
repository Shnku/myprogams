import java.io.PrintStream;
import java.util.Random;
import java.util.Scanner;

class BankAccount {
    String NameOfDepositor;
    String AccountNo;
    String AccountType;
    Double Balance;
    String[] options = { "CreateAC", "AC_Details", "Withdraw", "Diposite", "quit" };

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

    int Choose_option(int choice) {
        System.out.println("what do you want to..");
        for (String s : options) {
            System.out.println(s);
        }
        System.out.println("en choice: ");
        Scanner sc = new Scanner(System.in);

        while (options.equals("quit")) {
            switch (choice) {
                case 1:
                    InitiateBankAccout();
                    System.out.println("account created");
                    break;
                case 2:
                    DisplayAC_details();
                    break;
                case 3:
                    double money = sc.nextDouble();
                    Withdraw(money);
                    break;
                case 4:
                    double mony = sc.nextDouble();
                    Diposite(mony);
                    break;
                case 5:

                default:
                    System.out.println("enter proper choice");
                    break;
            }
        }
        sc.close();
        return choice;
    }
}

public class BankAccoutMain {
    public static void main(String[] cmd_line_args) {
        BankAccount myAccount = new BankAccount();

    }
}
