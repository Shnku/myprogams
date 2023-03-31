#include <stdio.h>
#include <stdlib.h>
// book  page 328
void get_row_col(int *, int *);
// void create_1_wrong(int **, int, int); //wrong...
int **creat_matrix_space(int, int);
void getdata(int **, int, int);
void display(int **, int, int);

int main()
{
    int **array = NULL;
    int row, col;

    get_row_col(&row, &col);
    // create_1_wrong(array, &row, &col);
    array = creat_matrix_space(row, col);
    printf("\nrow and col = %d x %d", row, col);
    printf("\nenter matrix data:====\n");
    getdata(array, row, col);
    display(array, row, col);

    // free allocated memory
    for (int i = 0; i < row; i++)
        free(array[i]);
    free(array);

    return 0;
}

void get_row_col(int *row, int *col)
{
    printf("\nenter the row x col size: ");
    scanf("%d%d", row, col);
}

int **creat_matrix_space(int row, int col)
{
    int **ptr;
    ptr = calloc(row, sizeof(int *));
    for (int i = 0; i < row; i++)
    {
        ptr[i] = calloc(col, sizeof(int));
    }
    return ptr;
}

// void create_1_wrong(int **ptr, int row, int col)
// {
//     *ptr = malloc(row * sizeof(int *));
//     for (int i = 0; i < row; i++)
//         (*ptr)[i] = malloc((col) * sizeof(int));
// }

void getdata(int **ptr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &ptr[i][j]);
            // scanf("%d", ((ptr + i) + j));
        }
    }
}

void display(int **ptr, int row, int col)
{
    printf("\ndisplaying the array\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf(" %d ", ptr[i][j]);
        }
        printf("\n");
    }
}

/*output*/
/*
enter the row x col size: 3
2

row and col = 3 x 2
enter matrix data:====
1
2
3
4
5
6

displaying the array
 1  2
 3  4
 5  6
*/
