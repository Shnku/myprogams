/*array frequency means which character have each time....*/
#include <stdio.h>
#include <stdlib.h>
#include "get_put_array.h"
#define SIZE 5

int store_frequency(int *arr, int len, int *temp, int *count);

int main()
{
    int arr[SIZE];
    int tmp[SIZE], cnt[SIZE];
    get_array_data(arr, SIZE);
    int size = store_frequency(arr, SIZE, tmp, cnt);
    display_array(tmp, size);
    display_array(cnt, size);

    return 0;
}

int store_frequency(int *arr, int len, int *temp, int *count)
{
    // int *temp,*count;
    int point = 0, flag = 0;
    for (int i = 0; i < len; i++)
    {
        temp[point] = arr[i];
        count[point] = 1;
        for (int j = 0; j < point; j++)
        {
            if (temp[j] == arr[i])
            {
                count[j]++;
                flag = 1;
            }
        }
        if (flag == 1)
            continue;
        point++;
    }
    return point;
}

// output...
/*
_ENTER THE ARRAY ELEMENTS___
1
2
5
2
2

__DISPLAYING THE ARRAY__ :    1   2   5
__DISPLAYING THE ARRAY__ :    1   3   1
*/
