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
        printf("\nen %dth player details: ", i + 1);
        fgets(plr[i].name, 20, stdin);
        scanf("%d%f", &plr[i].run, &plr[i].value);
        // fflush(stdin);
        getchar();
        /*
        !However, there is a potential issue in this code related to the use of fgets and scanf together to read input.
        The fgets function reads the input until a newline character is encountered, which is included in the string.
        On the other hand, the scanf function reads the input until it finds whitespace and leaves the newline character in the input buffer.
        This can cause issues if there are additional input commands after scanf.
        Todo : it's recommended to clear the input buffer after reading input using scanf, such as by calling getchar or fflush(stdin)
        */
    }

    printf("the palyer details are: \n\n");
    for (i = 0; i < 3; i++)
    {
        printf("name: %s", plr[i].name);
        printf("run: %d\t", plr[i].run);
        printf("value: %f\t", plr[i].value);
        printf("\n\n");
    }

    max = plr[0].value;
    for (i = 1; i < 3; i++)
    {
        if (plr[i].value > max)
        {
            max = plr[i].value;
            max_i = i;
        }
    }
    printf("\nmax value is: %f", max);
    printf("\nHeighest rated batsman is: \n");
    printf("\nname: %s, run: %d, value: %f", plr[max_i].name, plr[max_i].run, plr[max_i].value);
    return 0;
}
// One potential issue in the code is the use of fgets to read in the player's name. 
//It is important to note that fgets includes the newline character in the input string, which can cause problems if not handled properly
