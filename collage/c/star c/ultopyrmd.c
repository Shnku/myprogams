#include <stdio.h>
int main()
{
    int n;
    printf("en the number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            printf("_");
        }
        for (int j = n; j >= i; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}