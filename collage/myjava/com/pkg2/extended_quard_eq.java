
package com.pkg2;

import java.util.Scanner;
import com.pakg1st.quardratic_eq;

public class extended_quard_eq extends quardratic_eq {

    extended_quard_eq(double a, double b, double c) {
        super(a, b, c);
    }

    extended_quard_eq(double a, double b) {
        super(a, b, 0);
    }

    extended_quard_eq(double a) {
        super(a, 0, 0);
    }

    int has_root() {
        if ((b * b - 4 * a * c) > 0) {
            return 1;
        } else if ((b * b - 4 * a * c) < 0) {
            return 2;
        } else {
            return 0;
        }
    }

    public static void main(String[] args) {

        double x3, x1, x0;
        try (Scanner INPUT = new Scanner(System.in)) {

            System.out.println("enter the coefficients: ");
            x3 = INPUT.nextDouble();
            x1 = INPUT.nextDouble();
            x0 = INPUT.nextDouble();

            extended_quard_eq foo = new extended_quard_eq(x3, x1, x0);
            int retval = foo.has_root();

            if (retval == 1) {
                System.out.println("root are real & not equal__");
                double[] x = foo.find_root();
                for (double d : x) {
                    System.out.println(d);
                }

            } else if (retval == 2) {
                System.out.println("root are imag & not equal__");

            } else {
                System.out.println("root are real & equal__");
                double p[] = foo.find_root();
                for (double d : p) {
                    System.out.println(d);
                }
            }

        } catch (Exception e) {
            System.out.println("____wrong input____ ");
        }
    }
}

/*
 * 
 * //when i do....
 * 
 * double x3, x1, x0;
 * try (Scanner INPUT = new Scanner(System.in)) {
 * System.out.println("enter the coefficients: ");
 * x3 = INPUT.nextDouble();
 * x1 = INPUT.nextDouble();
 * x0 = INPUT.nextDouble();
 * }
 * 
 * //x3 ,x2 ,x0 values are only available in this block....
 * // so no acessible form here...
 * 
 * extended_quard_eq foo = new extended_quard_eq(x3, x1, x0);
 */

// ? output */
/*
 * [🔴] × java com/pkg2/extended_quard_eq
 * enter the coefficients:
 * 0
 * 0
 * 0
 * root are real & equal__
 * NaN
 * NaN
 * 
 * [🔴] × java com/pkg2/extended_quard_eq
 * enter the coefficients:
 * 1
 * 5
 * 6
 * root is real & not equal__
 * -2.0
 * -3.0
 */
