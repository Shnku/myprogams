#include <stdio.h>
int recursive_gcd(int, int);
int main()
{
    int no1, no2, rem, max, min, gcd;
    printf("en the two no:  ");
    scanf("%d%d", &no1, &no2);

    min = no2 < no1 ? no2 : no1;
    max = no2 > no1 ? no2 : no1;

    // int count=0;
    while (rem)
    {
        // printf("\n.........%dth time........\n",count);
        printf("\n.........th time........\n");
        rem = max % min;
        // 25%15=10...15%10=5=rem
        printf("\nrem= %d <-%d/%d", rem, max, min);
        gcd = min;
        // gcd=15...gcd=10...gcd=5
        printf("\ngcd <-%d", min);
        max = min;
        // max=15...max=10...max=5
        printf("\nmax <-%d", min);
        min = rem;
        // min=10....min=5....min=0
        printf("\nmin <-%d", rem);
        // count++;
    }

    printf("\n\n.........result........\n");
    printf("\ngcd is: %d ", gcd);
    printf("\nlcm is: %d", no1 * no2 / gcd);

    printf("\n\n%d", recursive_gcd(no1, no2));

    return 0;
}

int recursive_gcd(int max, int min)
{
    int r;
    printf("\n\n.....this is recursive gcd.....");
    r = max % min;
    printf("\nr= %d <-%d/%d", r, max, min);
    if (r == 0)
    {
        printf("\ngcd=min<-%d", min);
        return min;
    }
    else
        return recursive_gcd(min, r);
}