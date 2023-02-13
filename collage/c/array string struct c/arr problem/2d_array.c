#include <stdio.h>
#include <string.h>
void creat_arr(int, int, char[][10]);

int main()
{
    char arr[5][10];
    creat_arr(5, 10, arr);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; arr[i][j] != '\0'; j++)
        {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void creat_arr(int i, int j, char a[i][j])
{
    printf("\nenter the  array eement: \n");
    for (int row = 0; row < i; row++)
    {
        scanf("\%s", &a[i][j++]);

        // for (int col = 0; col < j; col++)
        // {
        //     scanf("%c", &a[row][col]);
        // }
    }
}