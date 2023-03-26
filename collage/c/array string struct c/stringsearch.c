#include <stdio.h>
#include <string.h>
void string_search(char *str, char *word);

int main()
{
    char string[50], word[10];
    // int flag = 0;

    printf("\nenter the string: ");
    fgets(string, 50, stdin);
    printf("\nenter the word to search: ");
    // fgets(word, sizeof(word), stdin);
    // word[strcspn(word, "\n")] = '\0';
    // word[strlen(word) - 1] = '\0';
    scanf("%s", word);
    string_search(string, word);
    // printf("\n%s", flag ? "found" : "not found");

    return 0;
}

void string_search(char *str, char *word)
{
    int i = 0;
    char temp[10];
    while (str[i] != '\0')
    {
        int j = 0;

        while (1)
        {
            if (str[i] == ' ' || str[i] == '\0')
                break;
            printf("\ntemp[%d]=%c", j, str[i]);
            temp[j++] = str[i++];
        }
        temp[j] = '\0';

        printf("\n__temp=%s", temp);
        printf("\n__word=%s", word);

        if (strcmp(word, temp) == 0) // only last line compared
        {
            printf("\ncomplring %s & %s", temp, word);
            printf("\nword found\n");
            break;
        }
        else
            printf("\nnot found\n");
        i++;
    }
}

/*
what  is happenning ...
!the problem happens with fgets()....it reada the '\n' at end.
?thats why,
complring the
             & the
?this is printed like this....
todo: fgets() scans the '\n'... use scanf instead ...to scan only a word.. other ways..
    * word[strcspn(word, "\n")] = '\0';
    * word[strlen(word) - 1] = '\0';

and in line 51 i++ is must....cause after detecting the ' ' it must have to increment i ti ger the pointed to ' ' +1 ts position...
*/
