// program for all string operations....
#include <stdio.h>
#include <string.h>

void get_string(char *s);
int calc_strlength(char *str);
void show_address_of_each_character(char *ch);
void concat_manual(char *ch, char ch2);
void concat_libray_func(char *ch1, char *ch2);
void string_cpmpare(char *c1, char *c2);
void convert_to_upper(char *c);
void convert_to_lower(char *c);

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
