#include <stdio.h>

void ultostar1(int);
void ultostar2(int);

int main()
{
    int n;
    printf("en the number: ");
    scanf("%d", &n);
    // call function pyramid.......
    ultostar1(n);

    return 0;
}

// star 3 block devided 3 inner for lope..
void ultostar1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
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

// star short space and star devided....
void ultostar2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int k = i; k < n; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}