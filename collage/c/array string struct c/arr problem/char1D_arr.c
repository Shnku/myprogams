#include <stdio.h>
#include <stdlib.h>

int get_size()
{
    int s;
    printf("\nentwr size of arr= ");
    scanf("%d", &s);
    return s;
}

void cptr_str(char *ch_ptr, int nth)
{
    printf("enter the string: ");
    int i;
    for (i = 0; i < nth; i++)
        // scanf("%c", *(ch_ptr + i));
        scanf("%c", &ch_ptr[i]);
    ch_ptr[i] = '\0';
}

void creat_str(char ch[], int nth)
{
    printf("enter the string: ");
    int i;
    for (i = 0; i < nth; i++)
        scanf("%c", &ch[i]);
    ch[i] = '\0';
}

void string_only(char ptr[], int max)
{
    printf("enter the string: ");
    // gets(ptr);
    fgets(ptr, max, stdin);
}

void diap_str(char ch[])
{
    printf("\nthe trsing is= ");
    for (int i = 0; ch[i]; /*!= '\0';*/ i++)
        printf("%c", ch[i]);
}

int main()
{
    int max = get_size();
    char s[max];
    // char s[100];
    // creat_str(s, max);
    // cptr_str(s, max);
    string_only(s, max); //! doesnot taking input...
    diap_str(s);

    return 0;
}