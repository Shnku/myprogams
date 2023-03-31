#include <stdio.h>
// #include "window_draw.c"

void plot_graph(int x[], int x_ln, int y[], int y_ln);

int main()
{
    int arr1[] = {1, 2, 4, 6, 7, 8};
    int arr2[] = {1, 4, 8, 12, 14, 16};
    // i == 2*j //y=2f(x)
    int max_x = 9, max_y = 17;
    plot_graph(arr1, max_y, arr2, max_x);

    return 0;
}

void plot_graph(int xa[], int x_ln, int ya[], int y_ln)
{
    printf("=============================================\n");
    for (int i = 0; i <= y_ln; i++)
        printf("%5d ", i);
    printf("\n____________________________________________\n");
    for (int i = 1; i <= x_ln; i++)
    {
        printf("|%2d |", i);
        for (int j = 1; j < y_ln; j++)
        {
            if (i == 2 * j) // y=2f(x)
                printf("     *");
            else
                printf("      ");
        }
        printf("\n");
    }
}

// output.....for y=f(x)
/*
=============================================
    0     1     2     3     4     5     6
____________________________________________
| 0 |     *
| 1 |           *
| 2 |                 *
| 3 |                       *
| 4 |                             *
| 5 |                                   *
*/

// output ... for y=2f(x)...
/*
=============================================
    0     1     2     3     4     5     6     7     8     9
____________________________________________
| 1 |
| 2 |     *
| 3 |
| 4 |           *
| 5 |
| 6 |                 *
| 7 |
| 8 |                       *
| 9 |
|10 |                             *
|11 |
|12 |                                   *
|13 |
|14 |                                         *
|15 |
|16 |                                               *
|17 |
*/
