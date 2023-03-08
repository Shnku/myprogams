#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void filecpy(FILE *open, FILE *to_copy)
{
    printf("\ncopying %p to %p", open, to_copy);
    while (!feof(open))
    {
        fputc(fgetc(open), to_copy);
    }
    printf("\ncopyin done;");
}

int main()
{
    FILE *open, *to_copy;
    char f1[20], f2[20];
    strcpy(f1, "file1.txt");
    strcpy(f2, "file2.txt");

    if (((open = fopen(f1, "r")) == NULL) || (to_copy = fopen(f2, "w")) == NULL)
    {
        printf("\ncan't open file");
        exit(1);
    }
    filecpy(open, to_copy);
    fclose(open);
    fclose(to_copy);
    return 0;
}