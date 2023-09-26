/*Problem statement:

Complete the code to develop a BASIC CALCULATOR that can perform operations like Addition, Subtraction, Multiplication and Division.

Note the following points carefully:
1. Use only double datatype to store calculated numeric values.
2. Assume input to be of integer datatype.
3. The output should be rounded using Math.round() method.
4. Take care of the spaces during formatting output (e.g., single space each before and after =).
5. The calculator should be able to perform required operations on a minimum of two operands as shown in the below example:

Input:
                       5+6 
Output:

                       5+6 = 11
*/

/*
 * BasicCalculator class...
 */
import java.util.Scanner;

public class BasicCalculator {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine(); // Read as string, e.g., 5+6
        // Declare and initialize the required variable(s)
        int no1, no2;
        char operator;

        // Split the input string into character array
        char[] array = input.toCharArray();
        /*
        Write your method to separate two operands
        and operators and then perform the required operation.
        */
        no1 = array[0] - '0';
        operator = array[1];
        no2 = array[2] - '0';

        // Print the output as stated in the question
        System.out.print(input + " = ");
        switch (operator) {
            case '+':
                System.out.println(no1 + no2);
                break;
            case '-':
                System.out.println(no1 - no2);
                break;
            case '*':
                System.out.println(no1 * no2);
                break;
            case '/':
                System.out.println(no1 / no2);
                break;
            default:
                break;
        }
        sc.close();
    }
}
