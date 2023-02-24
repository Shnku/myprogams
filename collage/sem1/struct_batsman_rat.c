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

    for (i = 0; i < 3; i++)
    {
        printf("\nen %dth player details:");
        // fflush(stdin);
        getchar();
        fgets(plr[i].name, 20, stdin);
        scanf("%d%f", &plr[i].run, &plr[i].value);
    }

    printf("the palyer details are: ");
    for (i = 0; i < 3; i++)
    {
        printf("name: %s",plr[i].name);
        printf("run: %d",plr[i].run);
        printf("value: %f",plr[i].value);
    }

    return 0;
}
