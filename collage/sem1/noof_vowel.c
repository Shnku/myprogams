#include <stdio.h>
#include <string.h>
int main()
{
    char a[50];
    int vowl=0,cons=0,sps=0,len;
    register int i;

    printf("\nen the sentense:\n");
    gets(a);
    len=strlen(a);

    for(i=0;i<len;i++)
    {
        if (a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
        {
            vowl++;
        }
        else if (a[i]==' ')
        {
            sps++;
        }
        else
        {
            cons++;
        }
    }
    printf("\nno of vowel: %d",vowl);
    printf("\nno of space: %d",sps);
    printf("\nno of consonent: %d",cons);
    return 0;
}