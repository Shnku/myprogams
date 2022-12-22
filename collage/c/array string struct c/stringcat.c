#include <stdio.h>
// #include <string.h>
char func_concat(char[], char[]);

int main()
{
    char s1[20], s2[20], finl[40];
    printf("en the first tring: ");
    scanf("%s", s1);
    printf("en the 2nd tring: ");
    scanf("%s", s2); // using %[^\n] couldnot take input ..

    finl[40] = func_concat(s1, s2);
    // finl = func_concat(s1, s2);..... wrong
    printf("the final string is : %s", finl);
    return 0;
}

char func_concat(char a[20], char b[20])
{
    int address = 0;
    char result[40];
    for (int i = 0; a[i] != '\0'; i++)
    {
        result[address] = a[i];
        address++;
    }
    for (int j = 0; a[j] != '\0'; j++)
    {
        result[address] = a[j];
        address++;
    }
    result[address] = '\0';
    // printf("the added str is : %s",result);
    return result[40];
    return result;
}
