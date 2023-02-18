#include <stdio.h>

int calc_strlength(char *str);
void show_address_of_each_character(char *ch);
void concat_manual(char *ch,char ch2);
void concat_libray_func(char *ch1,char *ch2);
void string_cpmpare(char *c1,char* c2);



int main()
{
    char c[80];
    printf("\nenter the syrind: ");
    fgets(c,80,stdin);

    return 0;
}