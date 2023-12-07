#include "singly_ll_create.h"

int main()
{
    LIST *head;
    int data, choice;

    printf("\n__this is a link list program__\navailavle options---\n");
    printf("\n1) create list");
    printf("\n2) add beginning");
    printf("\n3) add end");
    printf("\n4) add before");
    printf("\n5) add after");
    printf("\n6) delete beginning");
    printf("\n7) delete end");
    printf("\n8) delete after");
    printf("\n9) delete before");
    printf("\n10) delete specified");
    printf("\n11) delete full list");
    printf("\n12) display list");
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
