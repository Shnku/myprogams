#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("\n....................................");
    printf("\nupdatine the git repo\n");
    printf("....................................\n");
    system("git add --all");
    printf("\n");
    system("git commit -m \".\"");
    printf("\n");
    system("git push -u origin");

    return 0;
}