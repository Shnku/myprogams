#include <stdio.h>

int main()
{
    char s[20],c[20];
    printf("\nen the string: ");
    scanf("%[^\n]", s);
    int i=0,j=0;
    while (s[i]!='\0')
    {
        c[j]=s[i];
        printf("\n %c",c[j]);
        j++;i++;
        c[j]='\0';
    }
    
    return 0;
}