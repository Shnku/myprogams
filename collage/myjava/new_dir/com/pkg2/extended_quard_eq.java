
package com.pkg2;

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

        extended_quard_eq foo = new extended_quard_eq(4, 5, 6);
        int retval = foo.has_root();
        if (retval == 1) {
            System.out.println("root is real & not equal__");
            double[] x = foo.find_root();
            for (double d : x) {
                System.out.println(d);
            }

        } else if (retval == 2) {
            System.out.println("root is imag & not equal__");

        } else {
            System.out.println("root is real & equal__");
            double p[] = foo.find_root();
            for (double d : p) {
                System.out.println(d);
            }
        }

    }
}
