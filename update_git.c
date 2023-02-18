#include <stdio.h>

int main()
{
    printf("\nupdatine the git repo\n");
    system("git add --all");
    printf("\n");
    system("git commit -m \".\"");
    printf("\n");
    system("git push -u origin");

    return 0;
}