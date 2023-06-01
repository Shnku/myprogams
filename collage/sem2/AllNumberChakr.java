import java.util.Scanner;

/**
 * Krishnamurthyno. Eg : 145=1! + 4! + 5! .
 * perfect no. Eg: 6=1+2+3 .
 */

public class AllNumberChakr {

    static long factorial(int n) {
        return (n == 0 ? 1 : n * factorial(n - 1));
    }

    static boolean Krishnamurti_cheaker(int no) {
        int temp = no;
        int rem;
        int sum = 0;

        while (temp != 0) {
            rem = temp % 10;
            sum += factorial(rem);
            temp /= 10;
        }
        if (no == sum) {
            return true;
        } else {
            return false;
        }

    }

    static boolean perfectno_cheaker(int no) {
        int temp = no;
        int rem;
        int sum = 0;

        while (temp != 0) {
            rem = temp % 10;
            sum += rem;
            temp /= 10;
        }
        return (no == sum); // replace if else
    }

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        System.out.println("enter the number: ");
        int number = input.nextInt();
        System.out.println("is it krishnamurty no?\t" + Krishnamurti_cheaker(number));
        System.out.println("is it perfect no?\t" + perfectno_cheaker(number));

        input.close();
    }
}

/**
 ** output
 
 * enter the number:
 * 6
 * is it krishnamurty no? false
 * is it perfect no? true
 * 
 ** javac AllNumberChakr.java && java AllNumberChakr
 * enter the number:
 * 145
 * is it krishnamurty no? true
 * is it perfect no? false
 */
