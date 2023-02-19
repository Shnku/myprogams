#include <stdio.h>
#include <math.h>
int main()
{
    float n, i, f = 1, s = 0, x;
    printf("\nen the nth and x:");
    scanf("%d%d", &n, &x);
    for (i = 0; i <= n; i++)
    {
        f = f * i;
        // s=s+x/f;
        s = s + pow(-1, i) * x / f;
    }
    printf("\nthe sum is: %d", s);
    return 0;
}
/*
You can use the factorial() function from the math.h library to calculate an exact factorial value for any given 'n'. For example, for n=5, the value of 5! can be calculated as:

#include <stdio.h>
#include <math.h>

int main() {
    int n = 5, i;
    double f = 1;

    f = factorial(n);

    printf("%lf! = %lf\n",n,f);

    return 0;
}
This will output 5.000000! = 120.000000, indicating that 5! = 120.
*/