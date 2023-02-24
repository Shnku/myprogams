#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("git fetch origin");
    system("git merge origin");
    system("git pull origin master");
    return 0;
}