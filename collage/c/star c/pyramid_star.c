#include <stdio.h>

void pyramid1(int);
void pyramid2(int);

int main()
{
    int n;
    printf("en a no: ");
    scanf(" %d", &n);
    // call pyramis no....
    pyramid2(n);

    return 0;
}

void pyramid1(int n)
{
    // pyramid star ,.......
    for (int i = 0; i < n; i++)
    {
        for (int k = i; k < n - 1; k++)
        {
            printf(" ");
        }

        for (int j = 0; j < 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void pyramid2(int n)
{
    // pyramid star ,.......
    for (int i = 0; i < n; i++)
    {
        for (int k = i; k < n; k++)
        {
            printf(" ");
        }

        for (int j = 0; j < i - 1; j++)
        // for(int j=0;j<i;j++)
        // for(int j=1;j<i;j++)
        {
            printf("*");
        }

        for (int p = 0; p < i; p++)
        // for(int p=0;p<i-1;p++)
        // for (int p=1;p<i;p++)
        {
            printf("#");
        }

        printf("\n");
    }
}