// array shifting or rotating...
#include <stdio.h>
#include <stdlib.h>

void shift_array_left(int *, int);
void shift_array_right(int *, int, int);
void getdata(int a[], int size);
void display(int *a, int size);

int main()
{
    int *array, size;
    printf("\nenter the array size: ");
    scanf("%d", &size);
    array = (int *)malloc(size * sizeof(int));
    getdata(array, size);
    printf("\nbefore : ");
    display(array, size);
    shift_array_left(array, size);
    printf("\nafter: ");
    display(array, size);
    shift_array_right(array, size, 2);
    printf("\nafter: ");
    display(array, size);
    return 0;
}

void getdata(int a[], int size)
{
    printf("\nenter array elements:\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &a[i]);
}

void display(int *a, int size)
{
    printf("\ndisplaying the array: ");
    for (int i = 0; i < size; i++)
        printf(" %d ", a[i]);
}

void shift_array_left(int *a, int size)
{
    int shift_count;
    printf("\nen ter the no of shift: ");
    scanf("%d", &shift_count);
    while (shift_count)
    {
        int temp = a[0];
        for (int i = 0; i < size - 1; i++)
        {
            printf("\na[%d] <- a[%d] // %d -< %d", i, i + 1, a[i], a[i + 1]);
            a[i] = a[i + 1];
        }
        printf("\na[%d-1]=%d", size, temp);
        a[size - 1] = temp;
        shift_count--;
    }
}

void shift_array_right(int *a, int size, int count)
{
    while (count)
    {
        int temp = a[size - 1];
        for (int i = 0; i < size - 1; i++)
        {
            printf("\na[%d] <- a[%d] // %d -< %d", i, i + 1, a[i], a[i - 1]);
            a[i] = a[i - 1];
        }
        printf("\na[%d-1]=%d", size, temp);
        a[0] = temp;
        count--;
    }
}

/*....complete  ....*/
/*output*/
/*
enter the array size: 5
enter array elements: 10 20 30 40 50

before :
displaying the array:
a[0] = 10
a[1] = 20
a[2] = 30
a[3] = 40
a[4] = 50
en ter the no of shift: 2

a[0] <- a[1] // 10 -< 20
a[1] <- a[2] // 20 -< 30
a[2] <- a[3] // 30 -< 40
a[3] <- a[4] // 40 -< 50
a[5-1]=10
a[0] <- a[1] // 20 -< 30
a[1] <- a[2] // 30 -< 40
a[2] <- a[3] // 40 -< 50
a[3] <- a[4] // 50 -< 10
a[5-1]=20

after:
displaying the array:
a[0] = 30
a[1] = 40
a[2] = 50
a[3] = 10
a[4] = 20
*/
