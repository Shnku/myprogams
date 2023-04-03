#include <stdio.h>

void ultostar1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = i; k < n - 1; k++)
        {
            printf("*");
        }
        for (int m = i; m < n; m++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int x = 5;
    ultostar1(x);

    return 0;
}
