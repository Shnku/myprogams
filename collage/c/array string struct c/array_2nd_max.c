#include <stdio.h>
#define size 4

int find_2nd_max(int *arr, int len);

int main()
{
    int array[size];
    int max_2nd;
    for (int i = 0; i < size; i++)
        scanf("%d", &array[i]);

    max_2nd = find_2nd_max(array, size);
    printf("\nthe 2nd max value of the array is: %d", max_2nd);
    return 0;
}

int find_2nd_max(int *arr, int len)
{
    int max = arr[0];
    int max_2 = arr[0];
    for (int i = 0; i < len; i++)
    {
        printf("\n %d < %d \?", max, arr[i]);
        if (max < arr[i])
        {
            printf("\n %d <<= %d", max, arr[i]);
            max = arr[i];
        }
        printf("\n");
    }
    for (int i = 0; i < len + 1; i++)
    {
        printf("\n %d == %d \?", max_2, max);
        if (max_2 == max)
        {
            printf("\nyes");
            break;
        }
        printf("\n %d < %d \?", max_2, arr[i]);
        if (max_2 < arr[i])
        {

            printf("\n %d <<= %d", max_2, arr[i]);
            max_2 = arr[i];
        }
        printf("\n");
    }
    return max_2;
}
