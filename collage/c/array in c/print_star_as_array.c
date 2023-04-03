#include <stdio.h>

void ultostar1(int **n)
{
    for (int i = 0; i < n[i]; i++)
    {
        for (int j = 0; j < n[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int x[] = {3, 4, 6, 8, 9, 3};
    ultostar1(x);

    return 0;
}
