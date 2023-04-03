#include <stdio.h>
#define max 10

typedef struct matrix_box
{
    int box_draw[max][max];
    int row, col;
} box;

void ploat_graph(box, int *);

int main()
{
    box b1;
    int col = 4, row = 4;
    b1.row = row, b1.col = col;
    b1.box_draw[row][col];

    int arr[] = {1, 5, 3, 4};
    ploat_graph(b1, arr);
    return 0;
}

void ploat_graph(box B, int *data)
{
    for (int i = 0; i < B.row; i++)
    {
        for (int k = 0; k < data[i]; k++)
        {
            printf("*");
        }

        printf("\n");
    }
}
