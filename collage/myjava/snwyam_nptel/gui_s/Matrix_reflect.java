/*
 class Matrix_reflect
 Problem statement:

A program needs to be developed which can mirror reflect any 5 × 5 2D character array into its side-by-side reflection. Write suitable code to achieve this transformation as shown below:

 INPUT:                                       OUTPUT:
               OOXOO                                                                     OOXOO
               OOXOO                                                                      OOXOO
               XXXOO                                                                       OOXXX
               OOOOO                                                                      OOOOO
               XOABC                                                                      CBAOX

Note the following points carefully:
1. Here, instead of X and O any character may be present.
2. The input and output array size must be of dimension 5 × 5 and nothing else.
5. Only side-by-side reflection should be performed i.e. ABC || CBA.

*/

import java.util.Scanner;

public class Matrix_reflect {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // Declare necessary variables
        char arr[][] = new char[5][5];

        // Input 5x5 2D Array using Scanner Class
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                // String s = sc.next();
                // s = s.trim();
                // arr[i][j] = s.charAt(0);
                arr[i][j] = sc.next().charAt(0);
            }
        }

        char new_arr[][] = new char[5][5];
        // Perform the reflection operation
        for (int i = 0; i < 5; i++) {
            for (int j = 0, k = 4; j < 5; j++, k--) {
                new_arr[i][j] = arr[i][k];
            }
        }
        // Output 5x5 2D Reflection Array
        for (char[] is : new_arr) {
            for (char is2 : is) {
                System.out.print(is2 + " ");
            }
            System.out.println();
        }
        sc.close();
    }
}

//OUTPUT
/*
1 2 3 4 5
1 2 3 4 5
1 2 4 5 6
1 2 3 5 4
1 2 3 5 4

5 4 3 2 1 
5 4 3 2 1 
6 5 4 2 1 
4 5 3 2 1 
4 5 3 2 1 
 */
