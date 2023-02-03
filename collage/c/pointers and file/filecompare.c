#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp1, *fp2;
    int flag = 0;
    if (((fp1 = fopen("file1.txt", "r")) == NULL) || ((fp2 = fopen("file2.txt", "r")) == NULL))
    {
        printf("file doesnoe exists;");
        exit(1);
    }
    while (!feof(fp1) || !feof(fp2))
    {
        if (fgetc(fp1) != fgetc(fp2))
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("\nboth file are same");
    else
        printf("\nnot same file ");
    return 0;
}