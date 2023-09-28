/*
Write suitable code to develop a 2D Flip-Flop Array with dimension 5 × 5, which replaces all input elements with values 0 by 1 and 1 by 0. An example is shown below:

INPUT:
               00001
               00001
               00001
               00001
               00001

OUTPUT:

               11110
               11110
               11110
               11110
               11110

Note the following points carefully:
1. Here, the input must contain only 0 and 1.
2. The input and output array size must be of dimension 5 × 5.
3. Flip-Flop: If 0 then 1 and vice-versa.

*/

import java.util.Scanner;

public class Matrix_flipflop {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int mat[][] = new int[5][5];

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                short chance = 4;
                while (chance > 0) {
                    try {
                        int input = sc.nextInt();
                        if (input < 0 || input > 1)
                            throw new Exception();

                        mat[i][j] = input;
                        break;

                    } catch (Exception e) {
                        System.out.println("enter 1 or 0 only");
                        chance--;
                    }
                }
            }
        }

        for (int i = 0; i < mat.length; i++) {
            for (int j = 0; j < mat[i].length; j++) {
                if (mat[i][j] == 0) {
                    mat[i][j] = 1;
                } else
                    mat[i][j] = 0;
            }
        }

        for (int[] is : mat) {
            for (int is2 : is) {
                System.out.print(is2);
            }
            System.out.println();
        }

        sc.close();
    }
}

//output
/*
1 0 0 0 0
0 1 0 1 0
0 1 0 1 0
0 0 0 0 0
0 0 0 0 0

01111
10101
10101
11111
11111
 */
