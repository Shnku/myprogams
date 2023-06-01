#include <stdio.h>
int main()
{
    int row;
    printf("en the row no: ");
    scanf(" %d", &row);

    // upper pyramid loop...
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < row; j++)
        {
            printf("-");
        }
        for (int k = 0; k < i - 1; k++)
        {
            printf("*");
        }
        for (int l = 0; l < i; l++)
        {
            printf("$");
        }
        printf("\n");
    }
    // down pyramid loop...
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("-");
        }
        for (int k = i; k < row - 1; k++)
        {
            printf("$");
        }
        for (int l = i; l < row; l++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// output..
/*
en the row no: 5
-----
----$
---*$$
--**$$$
-***$$$$
$$$$*****
-$$$****
--$$***
---$**
----*
*/
