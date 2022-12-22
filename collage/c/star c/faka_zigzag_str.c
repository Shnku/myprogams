#include <stdio.h>

int main()
{
    int nth, row, col;
    printf("\nen the nth row: ");
    scanf("%d", &nth);

    for (row = 1; row <= nth; row++)
    {
        for (col = row; col <= nth; col++)
            printf("   ");

        for (col = 1; col <= 2 * row - 1; col++)
        {
            if (col % 2 == 0)
                printf(" * ");
            else
                printf("   ");
        }
        printf("\n");
    }

    return 0;
}