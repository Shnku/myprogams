#include <stdio.h>
struct batsman
{
    char name[20];
    int run;
    float value;
};
typedef struct batsman man;

int main()
{
    man plr[3];
    int i, max_i;
    float max = 0;

    for ( i = 0; i < 3; i++)
    {
        printf("\nen %dth player details:");
        fflush(stdin);
        gets(plr[i].name);
        fflush(stdin);

        scanf("%d%f", &plr[i].run,&plr[i].value);
    }
    
    return 0;
}