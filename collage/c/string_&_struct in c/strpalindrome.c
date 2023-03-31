#include <stdio.h>
// declar fucc.(prototype)...
int check_str_palin(char[], int);
int strlen_fnc(char[]);

// the main func....
int main()
{
    int flag, length;
    char str[30];
    printf("\nen the string to check.. ");
    scanf("%[^\n]", str);

    length = strlen_fnc(str);
    // printf("the lrn id %d: ", length);
    flag = check_str_palin(str, length);
    flag == 1 ? printf("not palin") : printf("yes");

    return 0;
}

// cheaker fuc body........
int check_str_palin(char s[30], int length)
{
    for (int i = 0, j = length - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
        {
            return 1;
            break;
        }
        // else return 0;
    }
}

// strlength funbc body....
int strlen_fnc(char c[30])
{
    int i;
    for (i = 0; c[i] != '\0'; i++)
    {
    }
    return i;
}