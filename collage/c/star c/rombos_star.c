#include <stdio.h>

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

int main()
{
    int n;
    printf("en the number: ");
    scanf("%d", &n);
    // call function pyramid.......
    pyramid1(n);
    ultostar1(n);

    return 0;
}

// output..
/*
en the number: 5

   *
  ***
 *****
*******
*********
 *******
  *****
   ***
    *
*/
