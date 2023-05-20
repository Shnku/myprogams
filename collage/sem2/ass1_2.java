/*. Write a program to read the price of an item in the decimal form (like 75.95) and print 
the output in paise (like 7595 paise). */

import java.io.Console;
import java.text.DecimalFormat;

public class ass1_2 {
    final static DecimalFormat style = new DecimalFormat("####");

    public static void main(String[] args) throws Exception {

        Console inp = System.console();
        System.out.println("Enter the number: ");
        float data = Float.parseFloat(inp.readLine());
        System.out.println("The string before: " + data);

        // String convert = style.format(data); //!not string 
        // System.out.println("After converting the no is: " + convert);
        System.out.println("After converting the no is: " + style.format(data));

    }
}
