/*program to saperate word from a string...*/
#include <stdio.h>

int main()
{
    char s[100], w[20];
    printf("\nen the string: ");
    fgets(s, 100, stdin);
    int k = 0, i = 0;
    while (s[k])
    {
        int j = 0;
        while (s[i])
        {
            if (s[i] == ' ' || s[i] == '\0')
                break;
            printf("\ntemp[%d]=%c", j, s[i]);
            w[j++] = s[i++];
        }
        printf("\n");
        k++;
    }
    return 0;
}

/*____explanation____for one while only__*/
/*
    while (s[i])
    {
        if (s[i] == ' ' || s[i] == '\0')
            break;
        printf("\ntemp[%d]=%c", j, s[i]);
        temp[j++] = s[i++];
    }
enter the string: this is the
temp[0]=t
temp[1]=h
temp[2]=i
temp[3]=s

then it breaks as ' ' is found ...
*/

/*this is alsio wrong..........*/
/*
    while (s[i] != '\0')
    {
        int j = 0;
        while (s[i] != ' ' && s[i] != '\0')
        {
            w[j++] = s[i++];
        }
        w[j] = '\0';
        printf("first word is: %s\n", w);
    }
first word is:
first word is:
first word is:
first word is:
first word is:
first word is:
first word is:
first word is:
^C⏎
/*!
!problem is*/
/*
The problem with this program is that it only prints out the first word in the input string. This is because the inner while loop that extracts each word from the string is nested inside a while loop that iterates over each character in the string.

So the inner while loop runs to extract the first word, but then the outer while loop continues from where the inner loop left off, and since the variable j is not reset, the second word will be placed immediately after the first word in the w array, overwriting it. Then the program prints out the first word again, because w still contains the first word.

To fix this issue, you need to create a 2D array to store all of the words in the string, and increment a separate index variable for each new word. Here's an updated version of your program that does this:
*/
