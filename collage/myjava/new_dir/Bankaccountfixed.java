import java.io.PrintStream;
import java.util.Random;
import java.util.Scanner;

class BankAccount {
    String NameOfDepositor;
    String AccountNo;
    String AccountType;
    Double Balance;
    String[] listOption = { "CreateAC", "AC_Details", "Withdraw", "Deposit", "Quit" };

    void accountNumberGenerator() {
        Random random = new Random();
        AccountNo = String.valueOf(Math.abs(random.nextInt()));
    }

    void initiateBankAccount() {
        System.out.println("Which type of AC do you want to create?");
        System.out.print("(1) Savings\n(2) Current\nEnter your choice: ");
        Scanner scanner = new Scanner(System.in);
        int key = scanner.nextInt();
        if (key == 1) {
            AccountType = "Savings";
        } else if (key == 2) {
            AccountType = "Current";
        } else {
            System.out.println("Enter proper choice");
            return;
        }
        scanner.nextLine(); // Consume the newline character
        System.out.print("Enter your name: ");
        NameOfDepositor = scanner.nextLine();
        accountNumberGenerator();
        Balance = 0.0;
        scanner.close();
    }

    void deposit() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the amount to deposit: ");
        double money = scanner.nextDouble();
        Balance += money;
        scanner.close();
    }

    void withdraw() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the amount to withdraw: ");
        double money = scanner.nextDouble();
        if (money > Balance) {
            System.out.println("Insufficient balance");
        } else {
            Balance -= money;
        }
        scanner.close();
    }

    void displayAccountDetails() {
        PrintStream sout = new PrintStream(System.out);
        sout.println("-----------------------------------");
        sout.printf("| AccountNo: %-20s |\n| ", AccountNo);
        sout.printf("Name: %-25s | \n| Account Type: %-22s |\n", NameOfDepositor, AccountType);
        sout.println("-----------------------------------\nCurrent Balance is: " + Balance);
    }

    void chooseOption() {
        System.out.println("What do you want to do?");
        for (int i = 0; i < listOption.length; i++) {
            System.out.printf("(%d) %s\n", i + 1, listOption[i]);
        }
        System.out.print("Enter your choice: ");
        Scanner scanner = new Scanner(System.in);
        int choice = scanner.nextInt();
        while (choice != 5) {
            switch (choice) {
                case 1:
                    initiateBankAccount();
                    System.out.println("Account created");
                    break;
                case 2:
                    displayAccountDetails();
                    break;
                case 3:
                    withdraw();
                    break;
                case 4:
                    deposit();
                    break;
                default:
                    System.out.println("Enter proper choice");
                    break;
            }
            System.out.println("-----------------------------------");
            System.out.print("Enter your choice: ");
            choice = scanner.nextInt();
        }
        scanner.close();
        System.out.println("Exiting...");
    }
}

public class Bankaccountfixed {
    public static void main(String[] args) {
        BankAccount myAccount = new BankAccount();
        myAccount.chooseOption();

    }
}
