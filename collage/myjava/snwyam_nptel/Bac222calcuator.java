/*
 Complete the code to develop an ADVANCED CALCULATOR that emulates all the functions of the GUI Calculator as shown in the image.


Note the following points carefully:
1. Use only double datatype to store all numeric values.
2. Each button on the calculator should be operated by typing the characters from 'a' to 'p'.
3. To calculate 25-6, User should input fjhkc (where, f for 2, j for 5, h for '-', k for 6 and c for '=' ).
3. You may use the already defined function gui_map(char).
4. Without '=', operations won't give output as shown in Input_2 and Output_2 example below.
5. The calculator should be able to perform required operations on two operands as shown in the below example:

Input_1:
                   klgc

Output_1:
                        18.0
 */

import java.util.Scanner;

public class Bac222calcuator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String ip = sc.nextLine();

        char[] array = ip.toCharArray();
        char operations = '0';
        int no1, no2;
        no1 = no2 = 0;
        boolean key = false;

        for (int i = 0; i < array.length; i++) {
            switch (array[i]) {
                case 'b':
                case 'e':
                case 'f':
                case 'g':
                case 'i':
                case 'j':
                case 'k':
                case 'n':
                case 'm':
                case 'o':
                    if (key == false) {
                        no1 = no1 * 10 + (gui_map(array[i]) - '0');
                        System.out.println("no1:" + no1);
                    } else {
                        no2 = no2 * 10 + (gui_map(array[i]) - '0');
                        System.out.println("no2:" + no2);
                    }
                    break;

                case 'd':
                    operations = gui_map(array[i]);
                    key = true;
                    System.out.println(operations);
                    break;
                case 'h':
                    operations = gui_map(array[i]);
                    key = true;
                    System.out.println(operations);
                    break;
                case 'l':
                    operations = gui_map(array[i]);
                    key = true;
                    System.out.println(operations);
                    break;
                case 'p':
                    operations = gui_map(array[i]);
                    key = true;
                    System.out.println(operations);
                    break;

                case 'c':
                    switch (operations) {
                        case '+':
                            System.out.println("no1 " + operations + " no2= " + (no1 + no2));
                            break;
                        case '-':
                            System.out.println("no1 " + operations + " no2= " + (no1 - no2));
                            break;
                        case 'X':
                            System.out.println("no1 " + operations + " no2= " + (no1 * no2));
                            break;
                        case '/':
                            System.out.println("no1 " + operations + " no2= " + (no1 / no2));
                            break;
                        default:
                            break;
                    }
                default:
                    break;
            }
        }

        sc.close();
    }
    // The main() method ends here.

    // A method that takes a character as input and returns the corresponding GUI character	
    static char gui_map(char in) {
        char out = 'N';// N = Null/Empty
        char gm[][] = {
                { 'a', '.' },
                { 'b', '0' },
                { 'c', '=' },
                { 'd', '+' },
                { 'e', '1' },
                { 'f', '2' },
                { 'g', '3' },
                { 'h', '-' },
                { 'i', '4' },
                { 'j', '5' },
                { 'k', '6' },
                { 'l', 'X' },
                { 'm', '7' },
                { 'n', '8' },
                { 'o', '9' },
                { 'p', '/' } };

        // Checking for maps
        for (int i = 0; i < gm.length; i++) {
            if (gm[i][0] == in) {
                out = gm[i][1];
                break;
            }
        }
        return out;
    }
}

//output..
/*
fgpic
no1:2
no1:23
/
no2:4
no1 / no2= 5


fglkc
no1:2
no1:23
X
no2:6
no1 X no2= 138

 */
