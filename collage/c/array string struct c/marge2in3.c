#include <stdio.h>
void mainprogram(void);
void set_array(int *, int);
void get_array(int *, int, char *);
int union_fill(int *, int, int *, int);

// self full in a function............
int main()
{
    // mainprogram();
    int a[5], b[5], c[15], d[5];
    printf(".........calling program function:.........");

    set_array(a, 5);
    set_array(b, 5);
    set_array(d, 5);
    get_array(a, 5, "array a");
    get_array(b, 5, "array b");
    get_array(d, 5, "array d");

    // int point = union_fill(a, 5, c, 0);

    int point;
    point = union_fill(d, 5, c, union_fill(b, 5, c, union_fill(a, 5, c, 0)));

    get_array(c, point, "final array c\n");

    // printf("\n%d", point);
    return 0;
}

// ............functions definitions are.............

// for scaning input the array....
void set_array(int *arr_ptr, int size)
{
    printf("\nenter the array;  ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr_ptr[i]);
    }
}

// for displayind the array....
void get_array(int *arr_ptr, int size, char *comnt)
{
    printf("\ndisplying the %s;  ", comnt);
    for (int i = 0; i < size; i++)
    {
        printf(" %d", arr_ptr[i]);
    }
}

// for union two array.......
int union_fill(int *ar_1, int size_1, int *to_arr, int point)
{
    int flag = 0;
    for (int i = 0; i < size_1; i++)
    {
        for (int j = 0; j < point; j++)
        {
            if (ar_1[i] == to_arr[j])
            {
                flag = 1;
                break;
            }
            else
                flag = 0;
        }
        if (flag == 0)
        {
            to_arr[point] = ar_1[i];
            point++;
        }
    }
    return point;
}

// full program i a main billow.....
void mainprogram(void)
{
    printf("\nthis is sub function: ");
    {
        int a[5], b[5], c[10];
        int point = 0, flag = 0;

        printf("enter array a: ");
        for (int i = 0; i < 5; i++)
        {
            scanf("%d", &a[i]);
        }
        printf("enter array b: ");
        for (int i = 0; i < 5; i++)
        {
            scanf("%d", &b[i]);
        }

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < point; j++)
            {
                if (a[i] == c[j])
                {
                    flag = 1;
                    break;
                }
                else
                    flag = 0;
            }
            if (flag == 0)
            {
                c[point] = a[i];
                point++;
            }
        }
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < point; j++)
            {
                if (b[i] == c[j])
                {
                    flag = 1;
                    break;
                }
                else
                    flag = 0;
            }
            if (flag == 0)
            {
                c[point] = b[i];
                point++;
            }
        }

        printf("\nunion of a & b::.......");
        for (int i = 0; i < point; i++)
        {
            printf(" %d", c[i]);
        }
        printf("\n%d", point);
        // return 0;
    }
}
