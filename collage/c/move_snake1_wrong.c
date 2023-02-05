#include <stdio.h>

void draw_border(int, int);
void gotoat(int, int);
int x, y;
int a, b;

/*....this is the main function....*/
int main()
{
    // printf("\nenter the window size: ");
    printf("\nen the coordinate to go: ");
    draw_border(30, 10);
    scanf("%d%d", &a, &b);
    return 0;
}

void draw_border(int x_max, int y_max)
{
    for (int i = 0; i < y_max; i++)
    {
        for (int j = 0; j < x_max; j++)
        {
            if (i == 0 || i == y_max - 1 || j == 0 || j == x_max - 1)
            {
                // printf("%d%d ",i,j);
                printf("#");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
