#include <stdio.h>
#include "get_put_array.h"
#define size 5

int find_2nd_max(int *arr, int len);


int main()
{
    int array[size];
    int max_2nd;
    get_array_data(array, size);
    max_2nd = find_2nd_max(array, size);
    printf("\nthe 2nd max value of the array is: %d", max_2nd);
    return 0;
}


