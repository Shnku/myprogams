#include <stdio.h>
#include <stdlib.h>
// book  page 328
void row_col_get(int *, int *);
void create(int **, int, int);
void getdata(int **, int, int);
void display(int **, int, int);

int main()
{
    int **array = NULL;
    int row, col;

    create(array, &row, &col);
    printf("\nrow and col = %d x %d", row, col);
    getdata(array, row, col);
    display(array, row, col);

    // free allocated memory
    for (int i = 0; i < row; i++)
        free(array[i]);
    free(array);

    return 0;
}

void row_col_get(int *, int *)
{
    printf("\nenter the row x col size: ");
    scanf("%d%d", row, col);
}

void create(int **ptr, int row, int col)
{
    printf("\nenter the row x col size: ");
    scanf("%d%d", row, col);

    *ptr = malloc(row * sizeof(int *));
    for (int i = 0; i < row; i++)
        (*ptr)[i] = malloc((col) * sizeof(int));
}

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
            printf("%d", ptr[i][j]);
        }
        printf("\n");
    }
}
