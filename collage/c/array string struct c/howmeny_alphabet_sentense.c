#include <stdio.h>
// int *no_of_alpha(char *);
void no_of_alpha(char *, int *count);

int main()
{
    char str[50];
    int cnt[30];
    int *ptr = &cnt[0];
    printf("\nenter the sentense: ");
    fgets(str, 50, stdin);

    for (int i = 0; i < 30; i++)
        cnt[i] = 0;

    no_of_alpha(str, cnt);

    for (int i = 0; i < 30; i++)
        printf("\ncnt[%d]=%d", i, cnt[i]);

    return 0;
}

void no_of_alpha(char *sen, int *count)
{
    for (int i = 0; sen[i]; i++)
    {
        for (int j = 0; sen[j]; j++)
        {
            if (sen[i] == sen[j])
            {
                count[i]++;
            }
        }
    }
}

// this is not working....
/*
int *no_of_alpha(char *sen)
{
    int *count, i = 0;
    for (; *sen; sen++)
    {
        count[i] = 1;
        for (; *sen; sen++)
        {
            if (*sen == *sen + 1)
            {
                count[i]++;
            }
        }
        i++;
    }
    return count;
}

*/
