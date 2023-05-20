package com.pakg1st;

public class quardratic_eq {
    protected  double c;
    protected  double b;
    protected  double a;

    public quardratic_eq(double a, double b, double c) {
        this.c = c; // static way..
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

/*
 * quardratic_eq.c = c; // static way..
 * quardratic_eq.b = b;
 * quardratic_eq.a = a;
 * 
 */

// protected static double c;
// protected static double b;
// protected static double a;

//here naming collition happenning withs extended_quard_eq program...
