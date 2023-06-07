import java.util.Random;
import java.util.Scanner;

class BankAccount {
    String NameOfDepositor;
    String AccountNo;
    String AccountType;
    Double Balance;
    String[] listOption = { "CreateAC", "AC_Details", "Withdraw", "Deposit", "Quit" };
    Scanner scanner = new Scanner(System.in);

    void accountNumberGenerator() {
        Random random = new Random();
        AccountNo = String.valueOf(Math.abs(random.nextInt()));
    }

    void initiateBankAccount() {
        // Scanner scanner = new Scanner(System.in);
        System.out.println("Which type of AC do you want to create?");
        System.out.print("(1) Savings\n(2) Current\nEnter your choice: ");
        while (!scanner.hasNextInt()) {
            System.out.println("Enter a valid choice");
            scanner.next(); // Consume the invalid input
        }
        int key = scanner.nextInt();
        while (key >= 3) {
            System.out.println("Enter (1) or (2)....");
            if (!scanner.hasNextInt()) {
                scanner.next(); // consumes..
                System.out.println("Enter (1) or (2)....");
            }
            key = scanner.nextInt(); // again input..
            if (key < 3)
                break; // putting under if else !init actype..
        }
        if (key == 1) {
            AccountType = "Savings";
        } else if (key == 2) {
            AccountType = "Current";
        }
        scanner.nextLine(); // Consume the newline character
        System.out.print("Enter your name: ");
        NameOfDepositor = scanner.nextLine();
        accountNumberGenerator();
        Balance = 0.0;
        System.out.println("Account created");
    }

    void deposit() {
        // Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the amount to deposit: ");
        while (!scanner.hasNextDouble()) {
            System.out.println("Enter a valid amount");
            scanner.next(); // Consume the invalid input
        }
        double amount = scanner.nextDouble();
        Balance += amount;
        System.out.println("Deposit successful");
    }

    void withdraw() {
        // Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the amount to withdraw: ");
        while (!scanner.hasNextDouble()) {
            System.out.println("Enter a valid amount");
            scanner.next(); // Consume the invalid input
        }
        double amount = scanner.nextDouble();
        if (amount > Balance) {
            System.out.println("Insufficient balance");
        } else {
            Balance -= amount;
            System.out.println("Withdrawal successful");
        }
    }

    void displayAccountDetails() {
        System.out.println("-----------------------------------");
        System.out.printf("| AccountNo: %-20s |\n", AccountNo);
        System.out.printf("| Name: %-25s |\n", NameOfDepositor);
        System.out.printf("| AC Type: %-22s |\n", AccountType);
        System.out.println("-----------------------------------");
        System.out.println("Current Balance is: " + Balance);
    }

    void chooseOption() {
        // Scanner scanner = new Scanner(System.in);
        int choice = 0;
        while (choice != 5) {
            System.out.println("What do you want to do?");
            for (int i = 0; i < listOption.length; i++) {
                System.out.printf("(%d) %s\n", i + 1, listOption[i]);
            }
            System.out.print("Enter your choice: ");
            while (!scanner.hasNextInt()) {
                System.out.println("Enter valid choice (1/2/3/4/5)");
                scanner.next(); // Consume the invalid input
            }
            choice = scanner.nextInt();
            scanner.nextLine(); // Consume the newline character
            switch (choice) {
                case 1:
                    initiateBankAccount();
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
                case 5:
                    System.out.println("Exit");
                    break;
                default:
                    System.out.println("Enter a valid choice");
                    break;
            }
            System.out.println();
        }
        scanner.close();// put it here..
    }
    // scanner.close(); // this is a statement inside class..
}

class mainBankAccountFixed {
    public static void main(String[] args) {
        BankAccount bankAccount = new BankAccount();
        bankAccount.chooseOption();
    }
}

// output...
/*
 * What do you want to do?
 * (1) CreateAC
 * (2) AC_Details
 * (3) Withdraw
 * (4) Deposit
 * (5) Quit
 * Enter your choice: 7
 * Enter a valid choice
 * 
 * What do you want to do?
 * (1) CreateAC
 * (2) AC_Details
 * (3) Withdraw
 * (4) Deposit
 * (5) Quit
 * Enter your choice: k
 * Enter valid choice (1/2/3/4/5)
 * 1
 * Which type of AC do you want to create?
 * (1) Savings
 * (2) Current
 * Enter your choice: 4
 * Enter (1) or (2)....
 * e
 * Enter (1) or (2)....
 * 1
 * Enter your name: sbag
 * Account created
 * 
 * What do you want to do?
 * (1) CreateAC
 * (2) AC_Details
 * (3) Withdraw
 * (4) Deposit
 * (5) Quit
 * Enter your choice: 4
 * Enter the amount to deposit: 4000
 * Deposit successful
 * 
 * What do you want to do?
 * (1) CreateAC
 * (2) AC_Details
 * (3) Withdraw
 * (4) Deposit
 * (5) Quit
 * Enter your choice: 2
 * -----------------------------------
 * | AccountNo: 186880293 |
 * | Name: sbag |
 * | AC Type: Savings |
 * -----------------------------------
 * Current Balance is: 4000.0
 * 
 * What do you want to do?
 * (1) CreateAC
 * (2) AC_Details
 * (3) Withdraw
 * (4) Deposit
 * (5) Quit
 * Enter your choice: 5
 * Exit
 */
