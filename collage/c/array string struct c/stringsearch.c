#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], t[20];
    char s2 = "the";
    printf("\nen the sentense: ");
    scanf("%[^\n]", s1);
    printf("\ninput succesful\n");
    int i = 0, j;
    while (s1[i] != '\0')
    {
        j = 0;
        while (1)
        {
            if (s1[i] != '\0' || s1[i] != ' ')
            {
                t[j] = s1[i];
                printf("\ni=%d, j=%d  ",i,j);
                j++;
                i++;
            }
            break;
            t[j] = '\0';
            
        }
        if (strcmp(t,s2)==0)
        {
            printf("found");
        }
        printf("\tt=%s", t);
    }

    return 0;
}

            // printf("\n......");
            // if (s1[i] == '\0' || s1[i] == ' ')
            //     printf("\ni=%d j=%d ",i,j);
            //     break;