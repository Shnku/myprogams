#include <stdio.h>
#include <stdlib.h>
struct matrix
{
    int row, col;
    int **array;
};
typedef struct matrix matrix;

void get_row_col(matrix *mp)
{
    printf("\nENTER ROW x COL SIZE:  ");
    scanf("%d %*c %d", &mp->row, &mp->col);
}

void creat_matrix(matrix *mp)
{
    for (int i = 0; i < mp->row; i++)
        mp->array[i] = malloc(mp->row * sizeof(int));
}

void getdata(matrix *mp)
{
    printf("\nENTER THE MATRIX ELEMENTS--------\n");
    for (int i = 0; i < mp->row; i++)
    {
        for (int j = 0; j < mp->col; j++)
        {
            scanf("%d", ((mp->array + i) + j));
            // scanf("%d", mp->array[i][j]);
        }
    }
}

/*demo func for displaying 2d array...*/
/*
void ptr_2arr(int row, int col, int *a[col])
{
    printf("en arr ele,ments:\n ");
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", *((a + i) + j));
}
*/

void display(matrix m)
{
    printf("\n_____DISPLAYING THE MATRIX_____\n");
    for (int i = 0; i < m.row; i++)
    {
        for (int j = 0; j < m.col; j++)
        {
            printf(" %3d", *((m.array + i) + j));
            printf(" %3d", m.array[i][j]);
        }
    }
}

int main()
{
    matrix m1;
    get_row_col(&m1);
    printf("\n row and col is : ___ %d x %d __", m1.row, m1.col);
    creat_matrix(&m1);
    printf("\nsizeof the matrix is: %d bytes", sizeof(m1));
    getdata(&m1);
    display(m1);
    return 0;
}

/*
output
*/
/*
matrix_dynamic.c: In function ‘getdata’:
matrix_dynamic.c:29:21: warning: format ‘%d’ expects argument of type ‘int *’, but argument 2 has type ‘int **’ [-Wformat=]
   29 |             scanf("%d", ((mp->array + i) + j));
      |                    ~^   ~~~~~~~~~~~~~~~~~~~~~
      |                     |                    |
      |                     int *                int **
matrix_dynamic.c: In function ‘display’:
matrix_dynamic.c:53:24: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘int *’ [-Wformat=]
   53 |            printf(" %3d", *((m.array + i) + j));
      |                     ~~^   ~~~~~~~~~~~~~~~~~~~~
      |                       |   |
      |                       int int *
      |                     %3ls
matrix_dynamic.c: In function ‘main’:
matrix_dynamic.c:65:38: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘long unsigned int’ [-Wformat=]
   65 | izeof the matrix is: %d bytes", sizeof(m1));
      |                      ~^         ~~~~~~~~~~
      |                       |         |
      |                       int       long unsigned int
      |                      %ld

ENTER ROW x COL SIZE:  3x2

fish: “"/workspaces/myprogams/collage/…” terminated by signal SIGSEGV (Address boundary error)
*/
