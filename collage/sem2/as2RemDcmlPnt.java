/* Write a program to read the price of an item in the decimal form,
(like 75.95) 
and print the output in paise 
(like 7595 paise). */

import java.io.Console;
import java.lang.Math;

public class as2RemDcmlPnt {

    static float pointval;
    static int intval;

    static int calculate(Float pointval) {
        as2RemDcmlPnt.pointval = pointval;

        String str = String.valueOf(pointval);
        System.out.println("the string is : " + str);
        System.out.println("/len=" + str.length() + " \n/point indx: " + str.indexOf('.'));

        int count = str.length() - str.indexOf('.');
        intval = (int) (pointval * Math.pow(10, count - 1));
        return intval;
    }

    /* This is the Main function... */
    public static void main(String[] args) {

        Console input = System.console();

        if (input != null) {
            // Float no = Float.parseFloat(input.readLine("En no: "));
            float no = Float.parseFloat(input.readLine("En te no: "));
            System.out.println("converted val is: " + calculate(no));

        } else {
            System.out.println("No terminal availavle...");
        }
    }
}

/*
 * output
 * 
 * javac as2RemDcmlPnt.java && java as2RemDcmlPnt
 * 
 * En te no: 145.121
 * the string is : 145.121
 * /len=7
 * /point indx: 3
 * converted val is: 145121
 */
