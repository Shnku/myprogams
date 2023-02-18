#include <stdio.h>

int th_2ndmain()
{
    char *string;
    printf("\nsizeo is %d", sizeof(string));
    printf("\nenter the string: ");
    // scanf("%s",string);//only takes before whitespace...
    gets(string);
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

int main(){
    
}