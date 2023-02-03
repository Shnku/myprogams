#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *opn, *cpy;
    if (((opn = fopen("file1.txt", "r")) == NULL) || (cpy = fopen("file2.txt", "w")) == NULL)
    {
        printf("\ncan't open file");
        exit(1);
    }
    while (!feof(opn))
    {
        fputc(fgetc(opn), cpy);
    }
    printf("\ncopyin done;");
    fclose(opn);
    fclose(cpy);
    return 0;
}