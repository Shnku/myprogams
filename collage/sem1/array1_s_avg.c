#include <stdio.h>

int main()
{
    int a[5], i, sum = 0;
    float avg=0;
    printf("\nen the 5 values in array:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < 5; i++)
        sum += a[i];
    avg = (float)(sum / 5);
    printf("\nthe sum of array elements is %d", sum);
    printf("\nthe avarage of array elements is %f", avg);
    return 0;
}