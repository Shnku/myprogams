#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *input, *output;
    // write into the file......
    if ((input = fopen("file1.txt", "a")) == NULL)
    {
        printf("\ncannot open file");
        exit(1);
    }
    char s[50];
    printf("\nen the string: ");
    fgets(s, 50, stdin);
    fputs(s, input);
    fclose(input);

    // read from the file........
    if ((output = fopen("file1.txt", "r")) == NULL)
    {
        printf("\ncannot open file");
        exit(1);
    }
    char p[50];
    fscanf(output, "%s", &p);
    for (int i = 0; !feof(output); i++)
    {
        p[i] = fgetc(output);
    }
    printf("contents of file:\n %s", p);
    fclose(output);
    return 0;
}