#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    int flag = 0;
    if (fp1=fopen(file1.txt, "r") || fp2=fopen(file2.txt, "r") == NULL)
    {
        printf("file doesnoe exists;");
    }
    while (fp1 != EOF || fp2 != EOF)
    {
        if (fgetc(fp1) != fgetc(fp2))
        {
            flag = 1;
            break;
        }
    }
    if(flag==0)
        printf("\nboth file are same");
    else
        printf("\nnot same file ");
    return 0;
}