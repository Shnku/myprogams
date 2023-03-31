#include <stdio.h>
#include "get_put_array.h"
#define size 4

int find_2nd_max(int *arr, int len); // not working

int main()
{
    int array[size];
    int max_2nd;
    get_array_data(array, size);
    max_2nd = find_2nd_max(array, size);
    printf("\nthe 2nd max value of the array is: %d", max_2nd);
    return 0;
}

int find_2nd_max(int *arr, int len)
{
    int max = arr[0];
    int max_2 = arr[0];
    int previous = 0;
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
            printf("\nyes max_2 = previous = %d", previous);
            max_2 = previous;
            break;
        }
        printf("\n %d < %d \?", max_2, arr[i]);
        if (max_2 < arr[i])
        {
            printf("\nprevious=max_2, %d<= %d", previous, max_2);
            previous = max_2;
            printf("\n %d <<= %d", max_2, arr[i]);
            max_2 = arr[i];
        }
        printf("\n");
    }
    return max_2;
}

// output.......
/*it works but we need to do len+1 times for 2nd loop */
/*
_ENTER THE ARRAY ELEMENTS___ 10 20 30 40
!first loop.....
 10 < 10 ?
 10 < 20 ?
 10 <<= 20
 20 < 30 ?
 20 <<= 30
 30 < 40 ?
 30 <<= 40
 10 == 40 ?  //it gives max =40

 !2nd loop start.......
 10 < 10 ?

 10 == 40 ?
 10 < 20 ?
previous=max_2, 0<= 10
 10 <<= 20

 20 == 40 ?
 20 < 30 ?
previous=max_2, 10<= 20
 20 <<= 30

 30 == 40 ?
 30 < 40 ?
previous=max_2, 20<= 30
 30 <<= 40

 40 == 40 ?  //!for this we need len+1 cheaking...
yes max_2 = previous = 30
the 2nd max value of the array is: 30
*/
