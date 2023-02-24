#include <stdio.h>
struct batsman
{
    char name[20];
    int run;
    float value;
};
// typedef struct batsman ;
typedef struct batsman man;

int main()
{
    // batsman plr[3];//!identifier "batsman" is undefined
    man plr[3];
    int i, max_i;
    float max = 0;

    for (i = 0; i < 3; i++)
    {
        printf("\nen %dth player details:", i);
        // fflush(stdin);
        getchar();
        fgets(plr[i].name, 20, stdin);
        scanf("%d%f", &plr[i].run, &plr[i].value);
    }

    printf("the palyer details are: \n\n");
    for (i = 0; i < 3; i++)
    {
        printf("name: %s\t", plr[i].name);
        printf("run: %d\t", plr[i].run);
        printf("value: %f\t", plr[i].value);
        printf("\n");
    }

    max = plr[0].value;
    for ( i = 1; i < 3; i++)
    {
        if (plr[i].value > max)
        {
            max = plr[i].value;
            max_i = i;
        }
    }
    printf("\nmax value is: %f", max);
    printf("\n\neighest rated batsman is: \n");
    printf("\nname: %s, run: %d, value: %f", plr[max_i].name, plr[max_i].run, plr[max_i].value);
    return 0;
}
