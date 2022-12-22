#include <stdio.h>
int main()
{
    int nth;
    printf("en the range: ");
    scanf("%d", &nth);

    for (int i = 0; i < nth; i++)
    {
        for (int k = 0; k < nth - i; k++)
        {
            printf(" ");
        }

        for (int j = 0; j < i * 2 - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
