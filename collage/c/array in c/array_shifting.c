// array shifting or rotating...
#include <stdio.h>
#include <stdlib.h>

void shift_array_left(int *, int);
void shift_array_right(int *, int, int);
void getdata(int a[], int len);
void display(int *a, int len);

int main()
{
    int *array, len;
    printf("\nenter the array len: ");
    scanf("%d", &len);
    array = (int *)malloc(len * sizeof(int));
    getdata(array, len);
    printf("\nbefore : ");
    display(array, len);
    // shift_array_left(array, len);
    // printf("\nafter: ");
    // display(array, len);
    printf("\nnow right shift 2----\n");
    shift_array_right(array, len, 2);
    printf("\nafter: ");
    display(array, len);
    return 0;
}

void getdata(int a[], int len)
{
    printf("\nenter array elements:\n");
    for (int i = 0; i < len; i++)
        scanf("%d", &a[i]);
}

void display(int *a, int len)
{
    printf("\ndisplaying the array: ");
    for (int i = 0; i < len; i++)
        printf(" %d ", a[i]);
}

void shift_array_left(int *a, int len)
{
    int shift_count;
    printf("\nen ter the no of shift: ");
    scanf("%d", &shift_count);
    while (shift_count)
    {
        int temp = a[0];
        for (int i = 0; i < len - 1; i++)
        {
            printf("\na[%d] <- a[%d] // %d -< %d", i, i + 1, a[i], a[i + 1]);
            a[i] = a[i + 1];
        }
        printf("\na[%d-1]=%d", len, temp);
        a[len - 1] = temp;
        shift_count--;
    }
}

void shift_array_right(int *a, int len, int count)
{
    while (count)
    {
        int temp = a[len - 1];
        // for (int i = len - 2; i >= 0; i--)
        // {
        //     printf("\na[%d] <- a[%d] // %d -< %d", i + 1, i, a[i + 1], a[i]);
        //     a[i + 1] = a[i];
        // }
        for (int i = len - 1; i >= 0; i--)
        {
            printf("\na[%d] <- a[%d] // %d -< %d", i, i - 1, a[i], a[i - 1]);
            a[i] = a[i - 1];
        }
        printf("\na[0]=%d", temp);
        a[0] = temp;
        count--;
    }
}

/*....complete  ....*/
/*output*/
/*
enter the array len: 5
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

/*right shifting ,,*/
/*
before :
displaying the array:  10  20  30  40  50
now right shift 2----

a[4] <- a[3] // 50 -< 40
a[3] <- a[2] // 40 -< 30
a[2] <- a[1] // 30 -< 20
a[1] <- a[0] // 20 -< 10
a[0]=50
a[4] <- a[3] // 40 -< 30
a[3] <- a[2] // 30 -< 20
a[2] <- a[1] // 20 -< 10
a[1] <- a[0] // 10 -< 50
a[0]=40
after:
displaying the array:  40  50  10  20  30
*/
