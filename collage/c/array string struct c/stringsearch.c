#include <stdio.h>
#include <string.h>
int string_search(char *str, char *word);

int main()
{
    char string[50], word[10];
    int flag = 0;

    printf("\nenter the string: ");
    fgets(string, 50, stdin);
    printf("\nenter the word to search: ");
    fgets(word, 10, stdin);

    flag = string_search(string, word);
    printf("\n%s", flag ? "found" : "not found");

    return 0;
}

int string_search(char *str, char *word)
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
        printf("\ntemp=%s", temp);
    }
}



/*
 this is wrong code .
initialization of 'char' from 'char *' makes integer from pointer without a cast [-Wint-conversion]
    7 |     char s2 = "the";.
 passing argument 2 of 'strcmp' makes pointer from integer without a cast [-Wint-conversion]
   28 |         if (strcmp(t,s2)==0)
      |                      ^~
      |                      |
      |                      char
expected 'const char *' but argument is of type 'char'
  156 | n int strcmp (const char *__s1, const char *__s2)
      |                                 ~~~~~~~~~~~~^~~~


en the sentense: this is th e sn

input succesful

*/
/*
int main_error()
{
    char s1[100], t[20];
    char s2 = "the";
    printf("\nen the sentense: ");
    scanf("%[^\n]", s1);
    printf("\ninput succesful\n");
    int i = 0, j;
    while (s1[i] != '\0')
    {
        j = 0;
        while (1)
        {
            if (s1[i] != '\0' || s1[i] != ' ')
            {
                t[j] = s1[i];
                printf("\ni=%d, j=%d  ", i, j);
                j++;
                i++;
            }
            break;
            t[j] = '\0';
        }
        if (strcmp(t, s2) == 0)
        {
            printf("found");
        }
        printf("\tt=%s", t);
    }

    return 0;
}

// printf("\n......");
// if (s1[i] == '\0' || s1[i] == ' ')
//     printf("\ni=%d j=%d ",i,j);
//     break;

*/
