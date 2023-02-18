#include <stdio.h>

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
    fgets(c, 80, stdin);
    printf("%c", stdin);
    
    return 0;
}