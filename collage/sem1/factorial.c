#include <stdio.h>
int facto(int);
long factorial(int no)
{
    int i;
    long f;
    while (i <= nth)
    {
        f = f * i;
        i++;
    }
    return f;
}
int main()
{
    int i, nth, facto = 1;
    printf("en the nth term: ");
    scanf("%d", &nth);
    facto = factorial(nth);
    printf("the factorial is: %d\n", facto);
    return 0;
}

int facto(int n)
{
    if (n == 0)
        return 1;
    else
        return n * facto(n - 1);
}