/*
Complete the code to perform a 45 degree anti clock wise rotation with respect to the center of a 5 × 5 2D Array as shown below:

INPUT:
              00100
              00100
              11111
              00100
              00100
OUTPUT:
              10001
              01010
              00100
              01010
              10001

 */

public class Matrix_rotate {
    public static void main(String[] args) {
        int row = 5, col = 5;
        // int mat1[][]=new int[row][col];

        int[][] mat1 = {
                { 8, 8, 1, 8, 8 }, // 00 01 02 03 04
                { 8, 8, 1, 8, 8 }, // 10 11 12 13 14
                { 1, 1, 1, 1, 1 }, // 20 21 22 23 24
                { 8, 8, 1, 8, 8 }, // 30 31 32 33 34
                { 8, 8, 1, 8, 8 } /// 40 41 42 43 44
        };

        int mat2[][] = new int[row][col];
        int mid = row / 2;

        //upper half...
        int pos = mid;
        for (int i = 0; i < mid; i++) {
            for (int j = mid; j < col; j++) {
                mat2[i][j - pos] = mat1[i][j];
            }
            pos--;
        }
        display(mat2);
        //lower half...
        pos = mid;
        for (int i = row - 1; i > mid; i--) {
            for (int j = mid; j >= 0; j--) {
                mat2[i][j + pos] = mat1[i][j];
            }
            pos--;
        }
        display(mat2);

        //rotate/...
        //upper half...
        pos = mid;
        for (int j = col - 1; j > mid; j--) {
            for (int i = mid; i < row; i++) {
                mat2[i - pos][j] = mat1[i][j];
            }
            pos--;
        }
        display(mat2);
        //lower half...
        pos = mid;
        for (int j = 0; j < mid; j++) {
            for (int i = mid; i >= 0; i--) {
                mat2[i + pos][j] = mat1[i][j];
            }
            pos--;
        }
        display(mat2);
    }

    static void display(int mat2[][]) {
        System.out.println("display...");
        for (int[] is : mat2) {
            for (int is2 : is) {
                System.out.printf("%3d ", is2);
            }
            System.out.println();
        }
    }
}

/*
display...
  1   8   8   0   0 
  0   1   8   8   0 
  0   0   0   0   0 
  0   0   0   0   0 
  0   0   0   0   0 
display...
  1   8   8   0   0 
  0   1   8   8   0 
  0   0   0   0   0 
  0   8   8   1   0 
  0   0   8   8   1 
display...
  1   8   8   0   1 
  0   1   8   1   8 
  0   0   0   8   8 
  0   8   8   8   0 
  0   0   8   8   1 
display...
  1   8   8   0   1 
  0   8   8   1   8 
  8   8   0   8   8 
  8   1   8   8   0 
  1   0   8   8   1 
 */
