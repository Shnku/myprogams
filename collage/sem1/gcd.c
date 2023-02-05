#include <stdio.h>
int gcd(int, int);
int main()
{
    int a, b;
    printf("\nen two no: ");
    scanf("%d%d", &a, &b);
    printf("the gcd is: %d", gcd(a, b));
    return 0;
}

int gcd(int max, int min)
{
    int gcd, rem;
    while (rem)
    {
        rem = max % min;
        max = min;
        min = rem;
    }
    gcd = max;
    return gcd;
}