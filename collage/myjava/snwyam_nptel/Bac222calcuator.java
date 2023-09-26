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
        double no1, no2;
        char[] array = ip.toCharArray();
        for (int i = 0; i < array.length; i++) {
            no1 = gui_map(array[i]);
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
