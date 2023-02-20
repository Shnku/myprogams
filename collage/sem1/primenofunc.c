#include <stdio.h>
int prime(int);
int main()
{
    int no, cheak;
    printf("\nen the no: ");
    scanf("%d", &no);
    /*
    ?We can optimized this code is faster and more efficient by checking for even numbers before running the loop:
    [ between line 07 & 08 ]

    if (n % 2 == 0)
        cheak=0;
     else
        cheak=prime(no);

    */
    cheak = prime(no);
    if (cheak == 1)
        printf("\nprime");
    else
        printf("\nnonprime ");
    return 0;
}

int prime(int n)
{
    int i;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
            break;
        }
    }
    return 1;
}