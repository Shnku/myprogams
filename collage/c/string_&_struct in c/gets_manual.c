// program for all string operations....
#include <stdio.h>
#include <string.h>

void get_string(char *s);

int main()
{
    char c[80];
    printf("\nenter the syrind: ");
    // fgets(c, 80, stdin);
    get_string(c);
    printf("%c", stdin);
    printf("\n%s", c);

    return 0;
}

/*
this is the get string function....*/
void get_string(char *s)
{
    char ch;
    for (int i = 0; i < 80; i++)
    {
        ch = getchar();
        // getc(ch); //!giving error ..
        switch (ch)
        {
        case '\n':
            s[i] = '\0';
            return; //! not break;
        case '\b':
            if (i > 0)
                i++;
            break;
        default:
            s[i] = ch;
        }
    }
    s[79] = '\0';
}
