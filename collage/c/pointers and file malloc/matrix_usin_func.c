//! Incorrect array initialization
//?The initialization of matrices is incorrect, since it does not specify the correct dimensions of the matrix - this problem appears in several sections of the code:*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 10
struct matrix
{
    int row, col;
    int array[MAX][MAX];
};
typedef struct matrix matrix;

void getdata(matrix *);
void display(matrix); // (matrix *);//doesnot need a pointer..
matrix sum(matrix, matrix);
void multiply(matrix, matrix, matrix *);

int main()
{
    matrix m1;
    printf("\nsixeof m1 matrix: %d", sizeof(m1));
    // m1.row = 2, m1.col = 3; // explicit define..
    // !m1.array[m1.row][m1.col];
    /* it is not a valid way to initialize the matrix array. */
    display(m1); // firstly garbage values...
    getdata(&m1);
    matrix m2, s;
    getdata(&m2);

    printf("\ndisplaying first matrix (m1)");
    display(m1);
    printf("\ndisplaying second matrix (m2)");
    display(m2);
    s = sum(m1, m2);
    display(s);
    multiply(m1, m2, &s);
    display(s);

    return 0;
}

void getdata(matrix *mp)
{
    printf("\nput matrix row x col size:  ");
    scanf("%d %*c %d", &mp->row, &mp->col); // %*c will ignore , or x
    // mp->array[mp->row][mp->col];
    /*? it is not a valid way to initialize the matrix array. Instead, use nested loops to initialize each element of the array.*/
    printf("\nenter %d x %d matrix element..\n", mp->row, mp->col);
    for (int i = 0; i < mp->row; i++)
    {
        for (int j = 0; j < mp->col; j++)
        {
            scanf("%d", &mp->array[i][j]);
        }
    }
}

void display(matrix a)
{
    printf("\n........the dimension is %d x %d:.........\n", a.row, a.col);
    for (int i = 0; i < a.row; i++)
    {
        for (int j = 0; j < a.col; j++)
            printf("%3d", a.array[i][j]);
        printf("\n");
    }
}

/*
 !this is giving error...temp.array[m1.row][m1.col]; is not a valid way to initialize the matrix array.
?........the matrix is 1417504424 x 32591:.........

matrix sum(matrix m1, matrix m2)
{
    if (m1.row != m2.row || m1.col != m2.col)
    {
        printf("DIFERENT ORDER...addition is not possible--");
        exit(0);
    }
    matrix temp;
    temp.array[m1.row][m1.col];
    for (int i = 0; i < m1.row; i++)
    {
        for (int j = 0; j < m1.col; j++)
            temp.array[i][j] = m1.array[i][j] + m2.array[i][j];
    }
    return temp;
}
*/

matrix sum(matrix m1, matrix m2)
{
    if (m1.row != m2.row || m1.col != m2.col)
    {
        printf("\nDIFERENT ORDER...addition is not possible--");
        return; // exit will break the full program return not.
    }
    printf("\nperforming matrix addition....\n");
    matrix temp;
    temp.row = m1.row, temp.col = m1.col;
    for (int i = 0; i < m1.row; i++)
    {
        for (int j = 0; j < m1.col; j++)
            temp.array[i][j] = m1.array[i][j] + m2.array[i][j];
    }
    return temp;
}

void multiply(matrix m1, matrix m2, matrix *mul)
{
    if (m1.col != m2.row)
    {
        printf("\n1st col != 2nd row...multiplication is not possible--");
        exit(0);
    }
    printf("\ncalculating the multiplication :------");
    mul->row = m1.row, mul->col = m2.col;
    for (int i = 0; i < m1.row; i++)
    {
        for (int j = 0; j < m2.col; j++)
        {
            mul->array[i][j] = 0;
            for (int k = 0; k < m1.col; k++)
            {
                mul->array[i][j] += m1.array[i][k] * m2.array[k][j];
            }
        }
    }
}

/**/
/*
output
matrix_usin_func.c: In function 'sum':
matrix_usin_func.c:98:9: warning: 'return' with no value, in function returning non-void
   98 |         return;
      |         ^~~~~~
matrix_usin_func.c:93:8: note: declared here
   93 | matrix sum(matrix m1, matrix m2)
      |        ^~~

sixeof m1 matrix: 408
........the dimension is -36301240 x 32646:.........

put matrix row col size: 2 3

enter 2 x 3 matrix element..
2 2 1 2 1 2

put matrix row col size: 2 3

enter 2 x 3 matrix element..
2 3 3 1 0 2

displaying first matrix (m1)
........the dimension is 2 x 3:.........
  2  2  1
  2  1  2

displaying second matrix (m2)
........the dimension is 2 x 3:.........
  2  3  3
  1  0  2

performing matrix addition....

........the dimension is 2 x 3:.........
  4  5  4
  3  1  4

the multiplication is:------
1st col != 2nd row...multiplication is not possible--⏎

*/
