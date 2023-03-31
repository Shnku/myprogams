#include <stdio.h>

int get_size()
{
    int s;
    printf("en the size: ");
    scanf("%d", &s);
    return s;
}

void creat_2arr(int row, int col, int a[][col])
{
    printf("en arr ele,ments:\n ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            scanf("%d", &a[i][j]);
    }
}

void disp_2arr(int row, int col, int a[][col])
{
    printf("display arr ele,ments:\n ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}

void ptr_2arr(int row, int col, int *a[col])
{
    printf("en arr ele,ments:\n ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            scanf("%d", *((a + i) + j));
    }
}

int main()
{
    int row = get_size(), col = get_size();
    int arr[row][col];

    // creat_2arr(row, col, arr);
    ptr_2arr(row, col, arr);
    disp_2arr(row, col, arr);

    return 0;
}
