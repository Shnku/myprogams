// this is a header file for array input and diaplay....
// #include <stdio.h>

void get_array_data(int *array, int size)
{
    printf("_ENTER THE ARRAY ELEMENTS___\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
}

void display_array(int *array, int size)
{
    printf("\n__DISPLAYING THE ARRAY__ : ");
    for (int i = 0; i < size; i++)
    {
        printf(" %3d", array[i]);
    }
}

void get_2d_array_data(int **ptr, int row, int col)
{
    printf("_ENTER THE ARRAY ELEMENTS___\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &ptr[i][j]);
            // scanf("%d", ((ptr + i) + j));
        }
    }
}

void display_2d_array_data(int **ptr, int row, int col)
{
    printf("\ndisplaying the array\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf(" %3d", ptr[i][j]);
        }
        printf("\n");
    }
}
