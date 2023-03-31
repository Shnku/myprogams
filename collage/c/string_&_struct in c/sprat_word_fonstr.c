/*program to saperate word from a string...*/
#include <stdio.h>

int main()
{
    char s[100], w[20];
    printf("\nen the string: ");
    fgets(s, 100, stdin);
    int j = 0, i = 0;
    while (s[i])
    {
        j = 0;
        while (1)
        {
            if (s[i] == ' ' || s[i] == '\n')
                break;
            printf("\ntemp[%d]=%c", j, s[i]);
            w[j++] = s[i++];
        }
        w[j] = '\0';
        printf("\n%s", w);
        i++; //! this is important....
    }
    /*output*/
    /*
    en the string: this is the sentense

    temp[0]=t
    temp[1]=h
    temp[2]=i
    temp[3]=s
    this
    temp[0]=i
    temp[1]=s
    is
    temp[0]=t
    temp[1]=h
    temp[2]=e
    the
    temp[0]=s
    temp[1]=e
    temp[2]=n
    temp[3]=t
    temp[4]=e
    temp[5]=n
    temp[6]=s
    temp[7]=e
    sentense
    */
    return 0;
}

/*
?this is also working.....*/
/*
    while (s[i] != '\0')
    {
        k = 0;
        while (s[i] != ' ' && s[i] != '\0')
        {
            printf("\ntemp[%d]=%c", k, s[i]);
            w[k] = s[i];
            i++;
            k++;
        }
        w[k] = '\0';
        printf("\n%s", w);
        i++; //! this is the culprit i miss every time...

        /*output for thies*/
/*
        en the string: this is th

        temp[0]=t
        temp[1]=h
        temp[2]=i
        temp[3]=s
        this
        temp[0]=i
        temp[1]=s
        is
        temp[0]=t
        temp[1]=h
        temp[2]=

        th

        temp[0]=^ //i think it is \n
        ^
//tosolve that there is a better version..
    while (s[i] != '\0')
    {
        k = 0;
        while (s[i] != ' ' && s[i] != '\0')
        {
            w[k] = s[i];
            k++;
            i++;
        }
        w[k] = '\0';
        printf("%s\n", w);
        if (s[i] == '\0')
            break;

        i++; // ?skip over the space character
    }

??explanation...
The reason why && is used instead of || in the condition s[i] != ' ' && s[i] != '\0' is that the loop should continue as long as s[i] is not a space character and is also not the null character \0.

Using || instead of && would mean that the loop would continue as long as s[i] is either not a space character or is not the null character, which is not the intended behavior.

For example, if the condition was s[i] != ' ' || s[i] != '\0', then the loop would continue even if s[i] is the null character because s[i] != '\0' would still evaluate to true if s[i] is a space character. This would lead to an infinite loop in the case where the null character is never encountered in the string s.

*/

//! down..all are wrong code......
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
The problem with this program is that it only prints out the first word in the input string.
This is because the inner while loop that extracts each word from the string is nested inside a while loop that iterates over each character in the string.

So the inner while loop runs to extract the first word,
but then the outer while loop continues from where the inner loop left off, and since the variable j is not reset, the second word will be placed immediately after the first word in the w array, overwriting it.
Then the program prints out the first word again, because w still contains the first word.

To fix this issue, you need to create a 2D array to store all of the words in the string, and increment a separate index variable for each new word. Here's an updated version of your program that does this:
*/

/*this is also wrong*/
/*
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
        printf("\n%s", w);
        printf("\n");
        k++;
    }
en the string: this is the name

temp[0]=t
temp[1]=h
temp[2]=i
temp[3]=s
this

this

this

this

this

this

*/
