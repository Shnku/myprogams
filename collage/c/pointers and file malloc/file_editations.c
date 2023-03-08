#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void file_open(FILE *fp, char nm[10], char mod[2]);
void remove_whitespace(FILE *);
void sentense_case_string(FILE *);
void file_word_search(FILE *);

int main()
{
    FILE *p;
    file_open(p, "file3.txt", "r");
    file_word_search(p);
    return 0;
}

void file_open(FILE *fp, char nm[10], char mod[2])
{
    if ((fp = fopen(nm, mod)) == NULL)
    {
        printf("\ncant open file");
        exit(0);
    }
    printf("\nfile %s open in %s mode", nm, mod);
}

/*
!wrong.....
The while loop could potentially continue forever since feof() may not trigger until after a read operation has been attempted past the end of file.
Inside the while loop, the code is calling fgetc() twice, so it will be reading every other character.
The strcmp() function should use == instead of ? to assign the value to the flag variable.
*/
// /*
void file_word_search(FILE *fp)
{
    char word[20], ch;
    int flag = 0;
    printf("\nen the word to search: ");
    fgets(word, 20, stdin);
    while ((ch=fgetc(fp)) != EOF)
    {
        int i = 0;
        char temp[12];
        while ((ch = fgetc(fp)) != ' ')
        {
            temp[i++] = ch; // using fgetc()..reads 2nd character..
        }
        temp[i] = '\n';
        strcmp(temp, word) ? (flag = 1) : (flag = 0);
    }
    flag ? printf("\nnot match") : printf("\nmatch");
}
// * /
