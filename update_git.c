#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("\n....................................");
    printf("\nupdatine the git repo\n");
    printf("....................................\n");
    
    system("git add --all");
    printf("\n\n");
    system("git commit -m \".\"");
    printf("\n\n");
    system("git push -u origin");

    return 0;
}

