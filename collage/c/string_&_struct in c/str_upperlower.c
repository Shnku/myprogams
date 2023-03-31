#include <stdio.h>

int main()
{
    char str[50];
    printf("\nen the letter: ");
    scanf("%s", str);
    int i;
    char upper[50];
    for (i = 0; str[i] != '\0'; i++)
    {
        printf("\nascii vlu of: %c=%d", str[i], str[i]);
        printf("  upper case is %c", str[i] - 32);
        upper[i]=str[i]-32;
    }
    printf("\n\nuppercase of the letter is: %s",upper);
}