#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    int count=0,i; 
    printf("\nen the sentense:\n");
    gets(s);

    while (s[i]!='\0')
    {
        if(s[i]==' ')
        {   count++; }
        i++;
    }
    printf("\nno of words: %d",count+1);
    return 0;
}