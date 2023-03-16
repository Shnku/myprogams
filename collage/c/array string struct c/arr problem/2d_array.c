/*also wrong d code,,,*/

/*
There are 2 problems with the code:

The declaration of the array arr in main is missing a size specification for the first dimension.
It should be char arr[5][10] instead of char arr[][10].

In the function creat_arr, the indexes of the array a are incorrect when reading the input.
It should be scanf("\%s", &a[row][0]); instead of scanf("\%s", &a[i][j++]);
because i and j are not being used correctly here.

*/

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
