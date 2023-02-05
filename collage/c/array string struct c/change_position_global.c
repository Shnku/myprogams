#include <stdio.h>
int s[3][3] = {0, 1, 2, 3, 4, 5, 6, 7, 8};

void display(int a[3][3])
{
    // system("echo hallo");
    system("clear");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    display(s);
    int i, j;
lebel:
input:
    printf("\nenter wher to go: ");
    scanf("%d%d", &i, &j);
    if (i > 3 || j > 3)
    {
        printf("en ter corect: ");
        goto input;
    }
    int n;
    printf("\nput the value to insert: ");
    scanf("%d", &n);
    s[i][j] = n;
    display(s);
    goto lebel;
    return 0;
}