#include <stdio.h>
// #include "window_draw.c"

void plot_graph(int x[], int x_ln, int y[], int y_ln);

int main()
{
    int arr1[] = {1, 2, 4, 6, 7, 8};
    int arr2[] = {1, 2, 4, 6, 7, 8};
    plot_graph(arr1, 6, arr2, 6);

    return 0;
}

void plot_graph(int xa[], int x_ln, int ya[], int y_ln)
{
    for (int i = 0; i < x_ln; i++)
    {
        for (int j = 0; j < y_ln; j++)
        {
            printf(" %d%d* ", xa[i], ya[j]);
        }
        printf("\n");
    }
}
