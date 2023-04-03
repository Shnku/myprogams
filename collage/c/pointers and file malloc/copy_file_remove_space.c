/*copy contents of a file to another after removing all whitespace*/

#include <stdio.h>
#include <stdlib.h>
void str_rm_space(char *);

int main()
{
    FILE *open, *copyto;
    char open_filenm[20] = "file_space.txt";
    char copy_filenm[20] = "file_copy.txt";
    // printf("\nenter file to open & tocopy: ");
    // scanf("%s", &open_filenm);
    // scanf("%s", &copy_filenm);
    char str[100];
    int index = 0;

    if ((open = fopen(open_filenm, "r")) == NULL || (copyto = fopen(copy_filenm, "w")) == NULL)
    {
        printf("\ncant open the file\n");
        exit(EXIT_FAILURE);
    }
    while (!feof(open))
    {
        char ch = fgetc(open);
        str[index] = ch;
        index++;
    }
    str[index - 1] = '\0'; // there is EOF
    fclose(open);

    printf("\nbefore:____\n %s", str);
    str_rm_space(str);
    printf("\nafter:_____\n %s", str);

    // fputs(str, copyto);
    for (int i = 0; *str;)
    {
        fputc(*str, copyto);
        str[i]++;
    }

    fclose(copyto);

    return 0;
}

void str_rm_space(char *s)
{
    int new_indx = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
            continue;
        else
            s[new_indx++] = s[i];
    }
    s[new_indx] = '\0';
}

// output if not using  s[new_indx] = '\0';
/*
 before:____
 this    is the    file   colntents.
gfgh jhj for end.

after:_____
 thisisthefilecolntents.
gfghjhjforend.
!h jhj for end.
*/
