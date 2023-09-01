#include <stdio.h>
#include <ctype.h>
void direct_frequency(char *str, char *temp, int *count);
int main()
{
    char s[] = "akwywordisit";
    char *t;
    int count[26];
    direct_frequency(s, t, count);
    return 0;
}

void direct_frequency(char *str, char *temp, int *count)
{
    for (int i = 0; i < 26; i++)
    {
        count[i] = 0;
    }

    int indx = 0;
    for (int i = 0; str[i]; i++)
    {
        indx = str[i] - 'a';
        printf("\n%c - a = %d", str[i], indx);
        count[indx]++;
        printf("\t%d", count[indx]);
    }
    printf("\n");
    for (int i = 0; i < 26; i++)
    {
        printf("%c=", i + 'a');
        printf("%d,", count[i]);
    }
}

// out..
/*
a - a = 0       1
k - a = 10      1
w - a = 22      1
y - a = 24      1
w - a = 22      2
o - a = 14      1
r - a = 17      1
d - a = 3       1
i - a = 8       1
s - a = 18      1
i - a = 8       2
t - a = 19      1
a=1,b=0,c=0,d=1,e=0,f=0,g=0,h=0,i=2,j=0,k=1,l=0,m=0,n=0,o=1,p=0,q=0,r=1,s=1,t=1,u=0,v=0,w=2,x=0,y=1,z=0,⏎
*/
