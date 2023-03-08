#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
    while (!feof(open))
    {
        fputc(fgetc(open), to_copy);
    }
    printf("\ncopyin done;");

    return 0;
}