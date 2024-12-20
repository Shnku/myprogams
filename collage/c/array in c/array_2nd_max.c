#include <stdio.h>
#include "get_put_array.h"
#define size 5

int find_2nd_max(int *arr, int len);
void swap(int *, int *);

int main()
{
    int array[size];
    int mAx_2;
    get_array_data(array, size);
    mAx_2 = find_2nd_max(array, size);
    printf("\nthe 2nd max value of the array is: %d", mAx_2);
    return 0;
}

int find_2nd_max(int *arr, int n)
{
    int mx_1 = arr[0];
    int mx_2 = arr[1];

    (mx_1 < mx_2) ? swap(&mx_1, &mx_2) : 0;
    // if (mx_1 < mx_2)   swap(&mx_1, &mx_2);

    for (int i = 2; i < n; i++)
    {
        if (mx_1 < arr[i])
        {
            mx_2 = mx_1;
            mx_1 = arr[i];
        }
        else if (mx_2 < mx_1 && mx_2 < arr[i])
        {
            mx_2 = arr[i];
        }
    }
    return mx_2;
}

void swap(int *x, int *y)
{
    int t = *x;
    *x = *y, *y = t;
}

//! How To Use #if 0 ... #endif To Remove Code For Debugging

#if 0
_ENTER THE ARRAY ELEMENTS___
1 5 44 2 55

the 2nd max value of the array is: 55

_ENTER THE ARRAY ELEMENTS___
1 2 5 4 3

the 2nd max value of the array is: 5
_ENTER THE ARRAY ELEMENTS___
1 6 2 4 5

the 2nd max value of the array is: 5

_ENTER THE ARRAY ELEMENTS___
10 11 5 6 14 13

the 2nd max value of the array is: 14


//! tosolve it do else if.....or put the 2nd if first...
#endif
