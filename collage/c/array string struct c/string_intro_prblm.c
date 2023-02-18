#include <stdio.h>
#include <string.h>

int th_2ndmain()
{
    char *string;
    printf("\nsizeo is %d", sizeof(string));
    printf("\nenter the string: ");
    // scanf("%s",string);//only takes before whitespace...
    // gets(string);
    /*
    It looks like you encountered a segmentation fault ( SIGSEGV ). This is generally caused by a program trying to write or read memory addresses that it does not have the permission to access. It could be caused by an incorrect pointer, undefined behavior or using uninitialized memory for example.
    */
    printf("\n%s", string);
    printf("\nsizeo is %d", sizeof(*string));
    // printf("\nsizeo is %d", sizeof(&string)); //! causing error

    fflush(stdin);
    fflush(stdout);
    char str[50];
    printf("\nenter the str: ");
    fgets(str, 50, stdin);
    fputs(str, stdout);

    return 0;
}

int main_a()
{
    int no;
    printf("\nen the no: ");
    scanf("%d", &no);

    printf("%c", stdin);

    char c[80];
    printf("\nenter the syrind: ");
    fgets(c, 80, stdin);
    printf("\nthe string is: %s", c);

    /*
    !first case,...
    en the no: 56 ljgmdgbngff //?then '\n'
    � //? this is actually '\n' character
    enter the syrind:
    the string is:  ljgmdgbngff
    */

    /*
    !second case...
    en the no: 35 //?then '\n'
    � //? this is actually '\n' character
    enter the syrind: //? it reads the the '\n' and exits..
    the string is:
    */
}

int main_onlychar()
{
    char ch[50];
    char ch2[60];

    printf("%c", stdin);
    printf("\nen the first: ");
    fgets(ch, 50, stdin);
    printf("%c", stdin);
    printf("\nen the second: ");
    fgets(ch2, 60, stdin);
    printf("%c", stdin);

    printf("\n\nenterd strings are:\n%s\n%s", ch, ch2);
    printf("\nsizeos(ch): %d", strlen(ch));
    printf("\nsizeos(ch2): %d", strlen(ch2));

    return 0;

    /*
    !this is not causing problem at all  ....
    �
    en the first: ghjghjhh
    �
    en the second: hjgjg
    �

    enterd strings are:
    ghjghjhh

    hjgjg

    sizeos(ch): 9
    sizeos(ch2): 6
    */
}

int main()
{
    // fixinf the before problem occures in ...*main_a*..
    int no;
    printf("\nen the no: ");
    scanf("%d", &no);

    printf("%c", stdin);
    getchar(); // it will read the '\n'
    char c[80];
    printf("\nenter the syrind: ");
    fgets(c, 80, stdin);
    printf("\nthe string is: %s", c);
}