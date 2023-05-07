package com.pakg1st;

public class quardratic_eq {
    protected double c, b, a;

    public quardratic_eq(double a, double b, double c) {
        this.c = c;
        this.b = b;
        this.a = a;
    } // there is no default argument in java...

    public double[] find_root() {
        double root[] = new double[2];
        root[0] = (-b + Math.sqrt(b * b - 4 * a * c)) / (2 * a);
        root[1] = (-b - Math.sqrt(b * b - 4 * a * c)) / (2 * a);
        return root;
    }
}
