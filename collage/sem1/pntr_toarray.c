#include <stdio.h>

int main_simple()
{
    int a[10], i;
    int *p, *q;

    printf("Input 10 integers \n");

    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    p = &a[0];

    for (i = 0; i < 10; i++)
    {
        printf("Value of a[%d] = %d \n", i, *p);
        p++;
    }

    return 0;
}

int add(int *, int);
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int sum = 0;
    sum = add(arr, 7);
    printf("\nthe sum: %d", sum);
    ;
    return 0;
}

int add(int *ptr, int nth)
{
    int i, s = 0;
    for (i = 0; i < nth; i++)
        s += ptr[i];

    return s;
}
