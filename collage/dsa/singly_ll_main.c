#include "singly_ll_create.h"

int main()
{
    LIST *head = NULL;
    int data, choice;

    printf("\n__this is a link list program__\navailavle options---\n");
    printf("\n1) create list");
    printf("\n2) add beginning");
    printf("\n3) add end");
    printf("\n4) add before");
    printf("\n5) add after");
    printf("\n6) display list");
    printf("\n__other input will exit the program__");

    choice = get_input();
    while (1)
    {
        switch (choice)
        {
        case 1:

            break;

        default:
            exit(0);
            break;
        }
    }

    return 0;
}
