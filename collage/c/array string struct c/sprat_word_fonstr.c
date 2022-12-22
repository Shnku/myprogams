#include <stdio.h>

int main()
{
    char s[100],c[20];
    printf("\nen the string: ");
    scanf("%[^\n]", s);
    int i=0,j,k;

    while (s[i]!='\0')
    {
        j=0;k=0;
        if (s[j]==' ' || s[j]=='\0')
        {
            c[k]=s[j];
            printf("\n %c",c[k]);
            j++;
            k++;
            // c[j]='\0';     
        }
        i++;
    }
    return 0;
}