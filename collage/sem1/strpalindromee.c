#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    int i,flag=0,len;
    printf("\nen the string: \n");
    scanf("%s", s);
    len=strlen(s);
    for ( i = 0; i < strlen(s); i++)
    {
        if (s[i]!=s[len-1-i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)    
        printf("\npalindrome...");
    else
        printf("\nnot...");
    return 0;
}
