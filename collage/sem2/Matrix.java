/* Perform matrix addition , subtraction , multiplication .
Class Matrix should have int row ,col ,mat[] [] as variables . 
Two matrix objects should be added , subtracted and multiplied . 
Class Matrix should have input() , display () , addition ,
subtraction and multiplication methods . */

import java.util.Scanner;

public class Matrix {
    int row, col;
    int mat[][];

    Matrix(int r, int c) {
        this.row = r;
        this.col = c;
        this.mat = new int[r][c];
    }

    Matrix(int[][] arr) {
        this(arr.length, arr[0].length);
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                this.mat[i][j] = arr[i][j];
            }
        }
    }

    Scanner sc = new Scanner(System.in);

    void getElements(String name) {
        System.out.println("enter details for " + name);
        for (int i = 0; i < mat.length; i++) {
            for (int j = 0; j < mat[i].length; j++) {
                mat[i][j] = sc.nextInt();
            }
        }
    }

    Matrix addition(Matrix m2) {
        if (this.row != m2.row && this.col != m2.col) {
            System.out.println("addition not possible..");
            return null;
        }
        Matrix foo = new Matrix(this.row, this.col);
        for (int i = 0; i < mat.length; i++) {
            for (int j = 0; j < mat[i].length; j++) {
                foo.mat[i][j] = this.mat[i][j] + m2.mat[i][j];
            }
        }
        return foo;
    }

    Matrix substraction(Matrix m) {
        if (this.row != m.row && this.col != m.col) {
            System.out.println("substraction isn't possible..");
            return null;
        }
        Matrix foo = new Matrix(this.row, this.col);
        for (int i = 0; i < foo.row; i++) {
            for (int j = 0; j < foo.col; j++) {
                foo.mat[i][j] = this.mat[i][j] - m.mat[i][j];
            }
        }
        return foo;
    }

    Matrix multiplication(Matrix m) {
        if (this.row != m.col) {
            System.out.println("multiplication isn't possible..");
            return null;
        }
        int[][] L = new int[this.row][m.col];
        for (int i = 0; i < this.row; i++) {
            for (int j = 0; j < m.col; j++) {
                L[i][j] = 0;
                for (int k = 0; k < this.col; k++) {
                    L[i][j] += this.mat[i][k] * m.mat[k][j];
                }
            }
        }
        return new Matrix(L);
    }

    Matrix transporseMatrix() {
        Matrix m = new Matrix(this.col, this.row);
        for (int i = 0; i < this.row; i++) {
            for (int j = 0; j < this.col; j++) {
                m.mat[j][i] = this.mat[i][j];
            }
        }
        return m;
    }

    void display(String s) {
        System.out.println("Matrix " + s + ".....");
        for (int[] is : mat) {
            for (int i : is) {
                System.out.print(i + " ");
            }
            System.out.println();
        }
        System.out.println();
    }

    /***********************************
     * this is the main mewthod...
     ************************************/
    public static void main(String[] args) {
        Matrix matrix1 = new Matrix(3, 2);
        matrix1.getElements("matrix1");

        int arr[][] = { { 1, 2, 6, }, { 5, 4, 2 } };
        Matrix matrix2 = new Matrix(arr);
        Matrix matrix3;

        matrix1.display("matrix1");
        matrix2.display("matrix2");
        int option;
        System.out.println("what you eanna do? en choice: ");
        Scanner io = new Scanner(System.in);
        option = io.nextInt();
        switch (option) {
            case 1:
                matrix3 = matrix1.addition(matrix2);
                if (matrix3 != null) {
                    matrix3.display("matrix3 addition");
                }
                // break;
            case 2:
                matrix3 = matrix1.substraction(matrix2);
                if (matrix3 != null) {
                    matrix3.display("matrix3 substraction");
                }
                // break;
            case 3:
                matrix3 = matrix1.multiplication(matrix2);
                if (matrix3 != null) {
                    matrix3.display("matrix3 multiplication");
                }
                // break;
            case 4:
                matrix3 = matrix1.transporseMatrix();
                matrix3.display("matrix3 transporse");
                break;
            default:
                matrix3 = null;
                break;
        }
        matrix3.display("matrix3");

        io.close();
    }
}

// output is...
/*
 * javac Matrix.java && java Matrix
 * enter details for matrix1
 * 1
 * 2
 * 3
 * 5
 * 4
 * 6
 * Matrix matrix1.....
 * 1 2
 * 3 5
 * 4 6
 * 
 * Matrix matrix2.....
 * 1 2 6
 * 5 4 2
 * 
 * what you eanna do? en choice:
 * 1
 * addition not possible..
 * substraction isn't possible..
 * Matrix matrix3 multiplication.....
 * 11 10 10
 * 28 26 28
 * 34 32 36
 * 
 * Matrix matrix3 transporse.....
 * 1 3 4
 * 2 5 6
 * 
 * Matrix matrix3.....
 * 1 3 4
 * 2 5 6
 */
